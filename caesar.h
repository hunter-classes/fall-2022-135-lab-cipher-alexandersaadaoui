#pragma once
#include <vector>

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
bool letterCheck(char letter);
double distance(std::vector<double> x, std::vector<double> y);
std::string solve(std::string encrypted_string);

