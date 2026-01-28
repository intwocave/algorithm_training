#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  void reverseString(vector<char>& s) {
    vector<char> tmp = s;
    s.clear();

    for (int i = tmp.size() - 1; i >= 0; i--) {
      s.push_back(tmp[i]);
    }
  };
};

int main(void) {
  string s = "helloworld";
  vector<char> v(s.begin(), s.end());

  Solution sol;

  sol.reverseString(v);
  string news(v.begin(), v.end());

  cout << news << endl;

  return 0;
}