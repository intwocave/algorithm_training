#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    // Logic
    int result = 0;

    for (int i = 0; i < nums.size(); i++) {
      result ^= nums[i];
      // cout << result << endl;
    }

    return result;
  }
};

int main(void) {
  vector<int> input_nums = {4, 1, 2, 1, 2};

  Solution sol;

  int result = sol.singleNumber(input_nums);

  cout << result << endl;

  return 0;
}