#include <iostream>
#include "caesar.h"
#include <vector>
#include <float.h>
#include <cmath>

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

bool letterCheck(char letter){
    if(((int)(letter) >= 65 && (int)(letter) <= 90) || ((int)(letter) >= 97 && (int)(letter) <= 122)){
        return true;
    }
    else{
        return false;
    }
}

double distance(std::vector<double> x, std::vector<double> y){
    double result;
    for(int i = 0; i < x.size(); i++){
        result += pow((x[i] - y[i]), 2);
    }
    return sqrt(result);
}

std::string solve(std::string encrypted_string){
    std::vector<double> ENG_FREQUENCIES{0.084966, 0.020720, 0.045388, 0.033844, 0.111607, 0.018121, 0.024705, 0.030034, 0.075448, 0.001964, 0.011016, 0.054893, 0.030129, 0.066544, 0.071635, 0.031671, 0.001962, 0.075809, .057351, 0.069509, 0.036308, 0.010074, 0.012899, 0.002902, 0.017779, 0.002722};
    double minDistance = DBL_MAX;
    int result = 0;
    int rotate = 0;

    for(char letter:encrypted_string){
        if(letterCheck(letter)){
            result++;
        }
    }
    for(int i = 0; i < 26; i++){
        std::string firstRotate = encryptCaesar(encrypted_string, i+1);
        int index;
        std::vector<double> encryptFrequencies(26);

        for(char letter:firstRotate){
            double count = 0;
            if((int)(letter) >= 65 && (int)(letter) <= 90){
                index = (int)(letter) - 65;
            }
            else if((int)(letter) >= 97 && (int)(letter) <= 122){
                index = (int)(letter) - 97;
            }

            if(letterCheck(letter)){
                for (int j = 0; j < firstRotate.length(); j++){
                    if (firstRotate[j] == letter) {
                        count++;
                    }
                }
                encryptFrequencies[index] = count/result;
            }

            if(distance(ENG_FREQUENCIES, encryptFrequencies) < minDistance){
                minDistance = distance(ENG_FREQUENCIES, encryptFrequencies);
                rotate = i + 1;
            }
        }
    }
    return encryptCaesar(encrypted_string, rotate);
}