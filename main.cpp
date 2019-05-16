#include <iostream>
#include <string>

#include "UtilityProvider.hpp"

int main() {
  int m, n;
  std::cout << "Enter the size of first string: " << std::endl;
  std::cin >> m;
  std::cout << "Enter the size of second string: " << std::endl;
  std::cin >> n;

  UtilityProvider u;

  char *str1 = new char[m], *str2 = new char[n];

  u.GenerateRandomString(str1, m);
  u.GenerateRandomString(str2, n);

  std::cout << "String 1: "<< str1 << " String 2: " << str2 << std::endl;

  return 0;
}