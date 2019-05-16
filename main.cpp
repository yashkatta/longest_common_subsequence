#include <iostream>
#include <string>

#include "LongestCommonSubsequence.hpp"
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

  std::cout << "String 1: " << str1 << " String 2: " << str2 << std::endl;

  LongestCommonSubsequence l;

  int result = l.SizeOfLongestCommonSubsequence(str1, m, str2, n);

  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Size of Longest Common Subsequence: " << result << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;
  return 0;
}