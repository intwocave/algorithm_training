#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> nums) {
  int answer = 0;
  int variety = 0;
  int max = nums.size()/2;

  unordered_map<int, int> m;

  for(auto const& a : nums) {
    if (m.count(a) == 1) {
      m[a]++;
    } else {
      m.insert({a, 1});
    }
  }

  // counting variety
  variety = m.size();

  if (variety >= max) answer = max;
  else answer = variety;

  return answer;
}

int main(void) {
  vector<int> nums = {3, 3, 3, 2, 2, 2};

  const int result = solution(nums);

  cout << "result: " << result << endl;

  return 0;
}