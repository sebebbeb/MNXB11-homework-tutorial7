# MNXB11-homework-tutorial7
## Overview
This project is a C++ command line application that uses `argparse` for
handling CLI arguments and `lazycsv` for CSV parsing.

## Building the project
Ensure `argparse.hpp` and `lazycsv.hpp` is in `external/include`.
 ```bash
   mkdir -p external/include
   
   curl -L -o external/include/argparse.hpp https://raw.githubusercontent.com/p-ranav/argparse/84c02050ea8bd1bf99de0a4943db40235e9fd5e7/include/argparse/argparse.hpp

   curl -L -o external/include/lazycsv.hpp https://raw.githubusercontent.com/ashtum/lazycsv/refs/heads/master/include/lazycsv.hpp
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
To make use of `test.csv`:
   ```bash
   ./main -i datasets/test.csv
   ```
  

