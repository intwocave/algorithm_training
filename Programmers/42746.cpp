#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
  vector<string> strVec;
  for(int i = 0; i < numbers.size(); i++) strVec.push_back(to_string(numbers[i]));
  
  sort(strVec.begin(), strVec.end(), [](const string& a, const string& b) {
    return a + b > b + a;
  });
  
  if (strVec[0] == "0") return "0";

  string answer = "";
  for (const string& s : strVec) answer += s;

  return answer;
}