#include <iostream>
#include "vigenere.h"
#include "caesar.h"
#include <cctype>

char shiftCharVigenere(char c, char rshiftVigenere)
{   
    int rshift = (int) rshiftVigenere % 97;
    return shiftChar(c, rshift);
}

std::string encryptVigenere(std::string plaintext, std::string keyword){
    int key = 0;
    std::string line;
    for(int i = 0; i < plaintext.length(); i++){
        if(isalpha(plaintext[i])){
            line += shiftCharVigenere(plaintext[i], keyword[key % keyword.length()]);
            key++; 
        }
        else{
            line += plaintext[i];
        }
    }

    return line;
}