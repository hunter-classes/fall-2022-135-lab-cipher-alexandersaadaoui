#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
    char shift;
    if (!isalpha(c)){
        return c;
    }
    else if (((c <= 90) && (c + rshift > 90)) || ((c <= 122 && c + rshift > 122))){
        return (c + rshift - 26);
    }
    else if (((c >= 65) && (c + rshift < 65)) || ((c >= 97 && c + rshift < 97))){
        return (c + rshift + 26);
    }

    return (c + rshift);
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string line;
    for(int i = 0; i < plaintext.length(); i++){
        line += shiftChar(plaintext[i], rshift);
    }
    return line;
}