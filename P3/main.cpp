#include <iostream>
#include <string>
#include "function.hpp"

int main() {
    std::cout << "Text: " << std::endl; // Text Sample: The weather today was none too pleasant. Despite the forecast saying otherwise, none of us expected the sudden downpour. We had planned a picnic, but with none of us bringing an umbrella, it quickly turned into a search for shelter. None of the nearby cafes had any space left for us to sit. In the end, none of the plans worked out, and we ended up heading back home.
    std::string text;
    std::getline(std::cin, text);

    std::string blockedWord = "none";

    bleep(text, blockedWord);

    std::cout << "New Text: " << text << std::endl;
}