#include <iostream>
#include <vector>
#include <map>
// #include <iterator>

using namespace std;

bool solution(vector<string> phone_book) {
  bool answer = true;

  map<string, int> m;

  for (auto const& a : phone_book) {
    m.insert({a, 1});
  }

  /* for (auto const& a : m) {
    cout << a.first << ' ' << a.second << endl;
  } */

  // string first = it->first;
  // string second = (++it)->first;
  
  auto it = m.begin();
  while (true) {
    string tmp = it->first;
    auto next_it = ++it;

    if (next_it == m.end()) break;
    
    int result = next_it->first.find(tmp);

    if (result == 0) {
      answer = false;
      break;
    }
  }

  /* int isFound = second.find(first);

  if (isFound == 0) answer = false;
  else if (isFound == -1) answer = true; */

  return answer;
}

int main(void) {
  vector<string> phone_book = {"119", "97674223", "1185524421"};

  const bool result = solution(phone_book);

  cout << "result: " << result << endl;

  return 0;
}