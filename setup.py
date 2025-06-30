import subprocess
import sys
import os

from setuptools import setup, find_packages


# Function to call the setup.py of the OMPythonInterface package
def install_omp_interface():
    this_file_dir = os.path.dirname(os.path.abspath(__file__))
    OMPythonInterface_dir = os.sep.join([this_file_dir, "OMPythonInterface"])
    print(OMPythonInterface_dir)
    try:
        subprocess.check_call(["pip", "install", "-e", "."], cwd=OMPythonInterface_dir)
        print(f"OMPythonInterface is installed")
    except subprocess.CalledProcessError as e:
        print(f"Error occurred while installing OMPythonInterface: {e}")
        sys.exit(1)


# Call the function to install OMPythonInterface
install_omp_interface()

setup(
    name="ModelicaEngine",
    version="0.1",
    install_requires=["scipy", "pandas", "numpy", "asyncua"],
    packages=find_packages(include=["ModelicaEngine", "ModelicaEngine.*"]),
)
