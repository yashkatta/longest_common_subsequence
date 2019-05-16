#include "UtilityProvider.hpp"
#include <cstdlib>
#include <iostream>

int UtilityProvider::NormalizedValue(float val, float maxVal, float minVal,
                                     float desiredMax, float desiredMin) {
  return (((val - minVal) / (maxVal - minVal)) * (desiredMax - desiredMin)) +
         desiredMin;
}

void UtilityProvider::GenerateRandomString(char* str, int n) {
  char ch;
  for (int i = 0; i < n; i++) {
    int check = rand() % 3;
    if (check == 0)
      ch = (char)NormalizedValue(rand() % 10, 9, 0, 57, 48);
    else if (check == 1)
      ch = (char)NormalizedValue(rand() % 26, 25, 0, 90, 65);
    else
      ch = (char)NormalizedValue(rand() % 26, 25, 0, 122, 97);
    str[i] = ch;
  }
}