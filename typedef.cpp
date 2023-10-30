#include <iostream>

int main() {

  // typedef = a keyword that is used to create 
  // a new name (alias) for an existing data type. 

  typedef std::string text_t;
  using myInt = int;

  

  text_t fullName = "Gagan Cheema";
  myInt age = 21;



  return 0;
}