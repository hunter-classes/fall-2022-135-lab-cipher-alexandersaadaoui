#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    int negativeShift = (rshift/-1);
    return encryptCaesar(ciphertext, negativeShift);
}

std::string decryptVigenere(std::string ciphtertext, std::string keyword)
{
    int check = 0;
    for (int i = 0; i < ciphtertext.length(); i++){
        ciphtertext[i] = shiftChar(ciphtertext[i], ((keyword[(i - check) % keyword.size()] - 97)/-1));
        if (!isalpha(ciphtertext[i])){
            check++;
        }
    }
    return ciphtertext;
}