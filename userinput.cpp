#include <iostream>
#include <sstream>
#include <string>

// cout << insertion operator
// cin >> extraction operator
using myInt = int;
typedef std::string text_t;


int main() {

  text_t name;
  myInt age;

  std::cout << "What is your full name?: ";
  std::getline(std::cin, name);

  std::cout << "What is your age?: ";
  std::cin >> age;

  std::cout << "Welcome, " << name <<"!" << " You are " << age << " years old!" << std::endl;

  return 0;
}