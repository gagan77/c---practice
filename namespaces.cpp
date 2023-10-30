#include <iostream>

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

int main() {
  // namespace - provides a solution for 
  // preventing name conflicts

  int x = 0;

  // :: is the scope resolution operator
  // Never use std namespace as it can raise
  // naming conflicts in your program
  
  std::cout << x << std::endl;

  //using first then second namespace
  std::cout << first::x << std::endl;
  std::cout << second::x << std::endl;


  

  return 0;
}