#include <iostream>
#include "caesar.h"

int main()
{
  std::cout << "Original: " << encryptCaesar("Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string.", 8) << std::endl;
  std::cout << "Solved: " << solve(encryptCaesar("Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string.", 8)) << std::endl;
  std::cout << std::endl;
  std::cout << "Original: " << encryptCaesar("The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.", 5) << std::endl;
  std::cout << "Solved: " << solve(encryptCaesar("The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.", 5)) << std::endl;
  std::cout << std::endl;
  return 0;
}