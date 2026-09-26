from pathlib import Path

from setuptools import setup, find_packages

# Local path dependency: let pip install OMPython itself.
# Do NOT call pip from setup.py — that breaks under modern pip build isolation.
_omp_uri = (Path(__file__).resolve().parent / "OMPythonInterface").as_uri()

setup(
    name="ModelicaEngine",
    version="0.1",
    install_requires=[
        "scipy",
        "pandas",
        "numpy",
        "asyncua",
        f"OMPython @ {_omp_uri}",
    ],
    packages=find_packages(include=["ModelicaEngine", "ModelicaEngine.*"]),
)
