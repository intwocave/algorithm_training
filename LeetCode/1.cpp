#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    const int size = nums.size();
    vector<int> ret;

    for (int i = 0; i < size - 1; i++) {
      for (int j = i + 1; j < size; j++) {
        if ((nums[i] + nums[j]) == target) {
          ret.push_back(i);
          ret.push_back(j);

          return ret;
        }
      }
    }

    return ret;
  }
};

int main(void) {
  Solution sol;

  vector<int> nums = {3, 3};
  int target = 6;

  vector<int> result = sol.twoSum(nums, target);

  for (const auto& var : result) {
    cout << var << " ";
  }

  return 0;
}