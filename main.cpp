#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "Task B: " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "Task C: " << encryptVigenere("Hello, World!", "cake") << std::endl;
  std::cout << "Task D (Ceasar): " << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
    std::cout << "Task D (Vingenere): " << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  return 0;
}