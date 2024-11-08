
#include <iostream>
#include "argparse.hpp"

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

  std::cout << "Input file: " << input_file << std::endl;

  return 0;
}
