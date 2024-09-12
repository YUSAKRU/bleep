#include <iostream>
#include <string>
#include "function.hpp"

int main() {
    std::string text = "I'm rolling up my broccoli";
    std::string wordToBleep = "broccoli";

    std::cout << "Original text:   " << text << std::endl;

    bleep(text, wordToBleep);
    std::cout << "Censored:   " << text << std::endl;
}