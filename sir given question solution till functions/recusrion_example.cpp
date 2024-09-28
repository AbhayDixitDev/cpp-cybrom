//Write a program to display the output using head and tail recursion.

#include <iostream>

// Head Recursion
void headRecursion(int n) {
  if (n > 0) {
  	headRecursion(n - 1);
    std::cout << n << " ";
    
  }
}

// Tail Recursion
void tailRecursion(int n) {
  if (n > 0) {
    std::cout << n << " ";
    tailRecursion(n - 1);
  }
}

int main() {
  int num = 5;

  std::cout << "Head Recursion: ";
  headRecursion(num);
  std::cout << std::endl;

  std::cout << "Tail Recursion: ";
  tailRecursion(num);
  std::cout << std::endl;

  return 0;
}
