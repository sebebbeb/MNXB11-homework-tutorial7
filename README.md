# MNXB11-homework-tutorial7
## Overview
This project is a C++ command line application that uses `argparse` for handling CLI arguments and `lazycsv` for CSV parsing, as well as `date` for handling dates and `fmt` for printing to the console.

## Building the project
Run `./setup` and then `make`, or follow these steps manually:

* Ensure `argparse.hpp`, `lazycsv.hpp` and `date.hpp` are in `external/include`.
```bash
mkdir -p external/include

curl -L -o external/include/argparse.hpp https://raw.githubusercontent.com/p-ranav/argparse/84c02050ea8bd1bf99de0a4943db40235e9fd5e7/include/argparse/argparse.hpp

curl -L -o external/include/lazycsv.hpp https://raw.githubusercontent.com/ashtum/lazycsv/refs/heads/master/include/lazycsv.hpp

curl -L -o external/include/date.hpp https://raw.githubusercontent.com/HowardHinnant/date/1a4f424659d39c2a222729bd2b1ccd8f857b3221/include/date/date.h
``` 

* Clone `fmt` into `build/fmt`.
```bash
mkdir -p build

git clone https://github.com/fmtlib/fmt.git build/fmt
```

* Install `fmt`.

```bash
cmake -S build/fmt -B build/fmt -DCMAKE_INSTALL_PREFIX=external

make -C build/fmt install
```

* Write `make` to build the project.

## Running the program 

The program takes an input file as a command-line argument.

To display help:
   ```bash
   ./main -h
   ```
To specify an input file:
   ```bash
   ./main -i input_file.csv
   ```
To make use of `test.csv`:
   ```bash
   ./main -i datasets/test.csv
   ```
  

