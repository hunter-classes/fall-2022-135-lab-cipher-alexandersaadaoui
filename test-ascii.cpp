#include <iostream>

int main(){
    std::string charLine;
    std::cout << "Input: " << std::endl;
    //std::getline(std::cin, charLine);
    charLine = "Cat :3 Dog";
    for(int i = 0; i < charLine.length(); i++){
        std::cout << charLine[i] << " " << (int)charLine[i] << std::endl;
    }

}