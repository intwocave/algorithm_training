#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    const int ssize = s.size();
    vector<char> v;

    for (int i = 0; i < ssize; i++) {
      char c = s.at(i);

      if ((c >= 97 && c <= 122) || (c >= 48 && c <= 57))
        v.push_back(c);

      if (c >= 65 && c <= 90) {
        v.push_back((char)c+32);
      }
    }

    const int size = v.size();

    for (int i = 0; i < size/2; i++) 
      if (v.at(i) != v.at(size - 1 - i)) return false;

    return true;
  }
};

int main(void) {
  string s = "0P";

  Solution sol;

  bool result = sol.isPalindrome(s);

  cout << (result ? "true" : "false") << endl;

  return 0;
}