
#include <iostream>
#include "argparse.hpp" // CLI library
#include "lazycsv.hpp" // CSV parsing library

int main(int argc, char *argv[]) {
   
  argparse::ArgumentParser program("CSV Reader");

  program.add_argument("-i", "--input-file")
    .help("Path to input CSV file")
    .required();

  try {
      program.parse_args(argc, argv);
  } catch (const std::runtime_error& err) {
    std::cerr << err.what() << std::endl;
    std::cerr << program;
    return 1;
  }

  std::string input_file = program.get<std::string>("--input-file");

  lazycsv::parser<
      lazycsv::mmap_source,
      lazycsv::has_header<true>,
      lazycsv::delimiter<','>,
      lazycsv::quote_char<'"'>,
      lazycsv::trim_chars<' ', '\t'>
  > csv_parser{input_file};

  for (const auto& row : csv_parser) {
    const auto [day, year, month, measurement] = row.cells(0, 1, 2, 4);


    std::cout << "Day: " << day.trimed() << ", Month: " << month.trimed() << ", Year: " << year.trimed()
              << ", Measurement: " << measurement.trimed() << std::endl;
  }

 
  return 0;
}
