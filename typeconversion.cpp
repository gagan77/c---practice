#include <iostream>

int main() {

  int x = 3.14;

  //implicate conversion
  std::cout << x;

  double x = 3.14;

  char x = 97; //implicit cast
  std::cout << (char) 97 << std::endl; //explicit cast

  int correct = 8;
  int questions = 10;

  double score = correct / (double) questions * 100;

  std::cout << score << "%" << std::endl;



  return 0;
}