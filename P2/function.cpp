#include "function.hpp"

void bleep(std::string &text, std::string &changeText) {
  int nI = 0;

  for (int i = 0; i < text.length(); i++) {
    if (text[i] == changeText[nI] ) {
      nI++;
      text[i] = '*';
    }
  }
};