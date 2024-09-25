from setuptools import setup, find_packages

setup(name='ModelicaEngine',
      version='0.1',
      install_requires=['scipy', 'pandas', 'numpy', 'asyncua'],
      packages=find_packages(include=['ModelicaEngine', 'ModelicaEngine.*'])
)  