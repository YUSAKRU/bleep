#include "function.hpp"

void bleep(std::string &text, const std::string &blockedWord) {
    size_t pos = text.find(blockedWord);
    std::string newWord = "*blocked*";
    while (pos != std::string::npos) {
        text.replace(pos, blockedWord.length(), newWord);
        pos = text.find(  blockedWord, pos + newWord.length() );
    };
}