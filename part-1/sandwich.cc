// Mariel Bravo
// mari.brv46@csu.fullerton.edu
// @SeukallesX
// Partners: @SepehrDebah

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // XTODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }
  // XTODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};
  // XTODO: Use cout to print output following the pattern
  // XTODO: Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order:\n";
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";
  return 0;
}
