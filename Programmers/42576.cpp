#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
  string answer = "";

  unordered_map<string, int> m;

  // initial insert elements
  for (auto const& a : participant) {
    // cout << a << endl;
    if (m.count(a) == 1) {
      m[a]++;
    } else {
      m.insert(make_pair(a, 1));
    }
  }

  // subtract
  for (auto const& a : completion) {
    m[a]--;
  }

  for (auto const& [key, val] : m) {
    // cout << key << ' ' << val << endl;

    if (val >= 1) {
      answer = key;
    }
  } 

  return answer;
}

int main(void) {
  vector<string> participant = {"leo", "kiki", "eden"};
  vector<string> completion = {"kiki", "eden"};

  const string result = solution(participant, completion);

  cout  << result << endl;

  return 0;
}