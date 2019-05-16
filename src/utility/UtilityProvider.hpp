#pragma once
#include <string>

class UtilityProvider {
 private:
  /* data */
 public:
  UtilityProvider(/* args */) {}
  ~UtilityProvider() {}

  int NormalizedValue(float val, float maxVal, float minVal, float desiredMax,
                      float desiredMin);
  void GenerateRandomString(char* str, int n);
};