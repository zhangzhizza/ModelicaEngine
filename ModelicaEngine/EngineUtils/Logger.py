# KEEP IN SYNC with the twin Logger.py in
# ModelicaEngine / FMUEngine / MBC / MBCscript.
# Do not import Logger across packages.
#
# Process-wide file/console sinks are stored on a well-known stdlib logger
# name so every twin can read the same config without cross-package imports.

from __future__ import annotations

import logging
import os
import sys
from logging.handlers import RotatingFileHandler
from pathlib import Path

_CONFIG_LOGGER_NAME = "_process_logging_config"

_FILE_FMT = logging.Formatter(
    "[%(asctime)s] %(name)s %(levelname)s %(message)s"
)

_CONSOLE_FMT_PLAIN = logging.Formatter(
    "[%(asctime)s] %(name)s %(levelname)s %(message)s"
)


def _colored_console_formatter():
    try:
        from colorlog import ColoredFormatter

        return ColoredFormatter(
            "%(log_color)s [%(asctime)s] %(name)s %(levelname)-3s%(reset)s %(message)s",
            datefmt=None,
            reset=True,
            log_colors={
                "DEBUG": "cyan",
                "INFO": "green",
                "WARNING": "yellow",
                "ERROR": "red",
                "CRITICAL": "red,bg_white",
            },
            secondary_log_colors={},
            style="%",
        )
    except Exception:
        return _CONSOLE_FMT_PLAIN


class _StdioTee:
    """Mirror writes to a primary stream and append to a log file."""

    def __init__(self, primary, log_path: Path):
        self._primary = primary
        self._log_path = log_path

    def write(self, data):
        if data is None:
            return 0
        text = data if isinstance(data, str) else data.decode("utf-8", "replace")
        try:
            self._primary.write(text)
        except Exception:
            pass
        try:
            with open(
                self._log_path, "a", encoding="utf-8", errors="replace"
            ) as fp:
                fp.write(text)
        except Exception:
            pass
        return len(text)

    def flush(self):
        try:
            self._primary.flush()
        except Exception:
            pass

    def isatty(self):
        try:
            return self._primary.isatty()
        except Exception:
            return False

    @property
    def encoding(self):
        return getattr(self._primary, "encoding", "utf-8")

    def fileno(self):
        return self._primary.fileno()

    def __getattr__(self, name):
        return getattr(self._primary, name)


def _unwrap_stdio() -> tuple:
    """Restore real stdout/stderr if previously tee'd; return the originals."""
    marker = logging.getLogger(_CONFIG_LOGGER_NAME)
    originals = getattr(marker, "_stdio_originals", None)
    if originals is not None:
        sys.stdout, sys.stderr = originals
        marker._stdio_originals = None
        return originals
    out, err = sys.stdout, sys.stderr
    if isinstance(out, _StdioTee):
        out = out._primary
    if isinstance(err, _StdioTee):
        err = err._primary
    return out, err


def _install_stdio_tee(log_file: str | os.PathLike) -> None:
    """Tee Python stdout/stderr into ``log_file`` (and keep the console)."""
    orig_out, orig_err = _unwrap_stdio()
    log_path = Path(log_file)
    log_path.parent.mkdir(parents=True, exist_ok=True)
    marker = logging.getLogger(_CONFIG_LOGGER_NAME)
    marker._stdio_originals = (orig_out, orig_err)  # noqa: SLF001
    sys.stdout = _StdioTee(orig_out, log_path)
    sys.stderr = _StdioTee(orig_err, log_path)


def get_process_logging_config() -> dict | None:
    """Return the process logging dict set by ``configure_process_logging``, or None."""
    marker = logging.getLogger(_CONFIG_LOGGER_NAME)
    return getattr(marker, "_process_logging", None)


def configure_process_logging(
    log_file: str | os.PathLike | None = None,
    log_console: bool = True,
    level: str | int = "INFO",
    max_bytes: int = 10_000_000,
    backup_count: int = 5,
    log_stdio: bool = False,
) -> None:
    """Attach rotating file and/or console handlers on the root logger.

    Idempotent: replaces existing root handlers. Named loggers created via
    ``Logger.getLogger`` / ``get_logger`` afterwards propagate to root when
    this has been called.

    Args:
        log_file: Destination log path. ``None`` skips the file handler.
        log_console: If False, no StreamHandler (quiet terminal).
        level: Root / named logger level.
        max_bytes: Rotate when the active file exceeds this size.
        backup_count: Number of rotated backups (``.log.1`` …).
        log_stdio: If True, also tee ``sys.stdout`` / ``sys.stderr`` into
            ``log_file`` (requires ``log_file``). Console logging still uses
            the real stderr so Python log lines are not duplicated in the file.
    """
    if log_stdio and log_file is None:
        raise ValueError("log_stdio=True requires log_file to be set")

    orig_out, orig_err = _unwrap_stdio()

    root = logging.getLogger()
    for handler in root.handlers[:]:
        root.removeHandler(handler)
        handler.close()

    root.setLevel(level)

    if log_file is not None:
        log_path = Path(log_file)
        log_path.parent.mkdir(parents=True, exist_ok=True)
        file_handler = RotatingFileHandler(
            filename=str(log_path),
            maxBytes=int(max_bytes),
            backupCount=int(backup_count),
            encoding="utf-8",
        )
        file_handler.setFormatter(_FILE_FMT)
        root.addHandler(file_handler)

    if log_console:
        console_handler = logging.StreamHandler(stream=orig_err)
        console_handler.setFormatter(_colored_console_formatter())
        root.addHandler(console_handler)

    if log_stdio:
        _install_stdio_tee(log_file)
    else:
        sys.stdout, sys.stderr = orig_out, orig_err

    marker = logging.getLogger(_CONFIG_LOGGER_NAME)
    marker.handlers = []
    marker.propagate = False
    marker.setLevel(logging.CRITICAL + 1)
    marker._process_logging = {  # noqa: SLF001 — intentional shared marker
        "log_file": str(log_file) if log_file is not None else None,
        "log_console": bool(log_console),
        "level": level,
        "max_bytes": int(max_bytes),
        "backup_count": int(backup_count),
        "log_stdio": bool(log_stdio),
    }


class Logger:
    """Build a named logger; respects ``configure_process_logging`` when set."""

    def getLogger(self, name, level, formatter):
        logger = logging.getLogger(name)
        if len(logger.handlers) > 0:
            logger.handlers = []

        cfg = get_process_logging_config()
        if cfg is not None:
            # Root owns sinks; do not install private handlers.
            logger.propagate = True
            logger.setLevel(cfg.get("level", level))
            return logger

        console_handler = logging.StreamHandler()
        if type(formatter) is str:
            console_handler.setFormatter(logging.Formatter(formatter))
        else:
            console_handler.setFormatter(formatter)
        logger.addHandler(console_handler)
        logger.setLevel(level)
        logger.propagate = False
        return logger
