#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  int strStr(string haystack, string needle) {
    const int sizeHaystack = haystack.size();
    const int sizeNeedle = needle.size();

    for (int i = 0; i <= sizeHaystack - sizeNeedle; i++) {
      int k = 0;
      for (int j = i; j < sizeHaystack && k < sizeNeedle; j++, k++)
        if (haystack.at(j) != needle.at(k)) break;
          
      if (k >= sizeNeedle) return i;
    }

    return -1;
  }
};

int main(void) {
  string haystack = "sadbutsad";
  string needle = "sad";

  Solution sol;

  int result = sol.strStr(haystack, needle);

  cout << result << endl;

  return 0;
}