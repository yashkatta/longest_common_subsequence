#include "LongestCommonSubsequence.hpp"
#include <algorithm>
#include <iostream>

int LongestCommonSubsequence::SizeOfLongestCommonSubsequence(const char* str1,
                                                             int m,
                                                             const char* str2,
                                                             int n) {
  int LCSuff[m + 1][n + 1];

  std::cout << "  ";
  for (int i = 0; i <= n; i++) std::cout << (i == 0 ? ' ' : str2[i - 1]) << " ";
  std::cout << std::endl;

  for (int i = 0; i <= m; i++) {
    std::cout << (i == 0 ? ' ' : str1[i - 1]) << " ";
    for (int j = 0; j <= n; j++) {
      LCSuff[i][j] = 0;
      if (i == 0 || j == 0) {
      } else if (str1[i - 1] == str2[j - 1])
        LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
      else
        LCSuff[i][j] = std::max(LCSuff[i - 1][j], LCSuff[i][j - 1]);
      std::cout << LCSuff[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return LCSuff[m][n];
}