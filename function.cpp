#include <string>
#include "function.hpp"

void bleep(std::string &text, const std::string &wordToBleep) {
    size_t pos = 0;
    std::string replacemant(wordToBleep.length(), '*');

    while (   (pos = text.find(wordToBleep, pos)) != std::string::npos   ) {
        text.replace(pos, wordToBleep.length(), replacemant);
        pos += replacemant.length();
    }
};