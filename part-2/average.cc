// Mariel Bravo
// mari.brv46@csu.fullerton.edu
// @SeukallesX
// Partners: @SepehrDebah

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "Error: At least one command line argument is required."
              << std::endl; 
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < arguments.size(); i++) {
    try {
      double value = std::stod(arguments[i]);
      sum += value;
      count++;
    } catch (const std::invalid_argument& e) {
      std::cout << "Error: Invalid argument at position " << i << " - "
                << e.what() << std::endl;
      return 1;
    }
  }

  double average = (count > 0) ? (sum / count) : 0.0;

  std::cout << "average = " << average << std::endl;

  return 0;
}

