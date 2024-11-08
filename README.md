# MNXB11-homework-tutorial7
## Overview
This project is a C++ command line application that uses 'argparse for
handling CLI arguments.

## Building the project
Firstly, ensure `argparse.hpp` is in `external/include`.
 ```bash
   mkdir -p external/include
   
   curl -L -o external/include/argparse.hpp https://raw.githubusercontent.com/p-ranav/argparse/main/include/argparse/argparse.hpp
  ``` 
Write `make` to build the project.

## Running the program 

The program takes an input file as a command-line argument.

To display help:
   ```bash
   ./main -h
   ```
To specicy an input file:
   ```bash
   ./main -i input_file.csv
   ```
  

