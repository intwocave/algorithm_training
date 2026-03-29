#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
  int answer = -1;
  int tmp_k, max;

  sort(dungeons.begin(), dungeons.end());

  do {
    // init
    tmp_k = k;
    max = 0;

    for (auto const& a : dungeons) {
      if (tmp_k < a[0]) break;
      // cout << '[' << a[0] << ", " << a[1] << ']' << endl;

      tmp_k -= a[1];
      max++;
    }
    // cout << endl;

    if (max > answer) answer = max;
  } while (next_permutation(dungeons.begin(), dungeons.end()));

  return answer;
}

int main(void) {
  int k = 80; // 1 <= k(N) <= 5000
  vector<vector<int>> dungeons = {
    // 1 <= size <= 8
    // 1 <= N <= 1000
    {50, 40},
    {80, 20},
    {30, 10}
  };

  int result = solution(k, dungeons);

  cout << "result: " << result << endl;

  return 0;
}