#include <iostream>
#include <string>
#include "function.hpp"

int main() {
  std::string text = "I'm rolling up my broccoli";
  std::string changeText = "broccoli";
  bleep(text, changeText);
  std::cout << text << std::endl;
}