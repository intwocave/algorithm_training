#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
  int answer = 0;
  int max_w = 0, max_h = 0;

  for (int i = 0; i < sizes.size(); i++) {
    if (sizes[i][1] > sizes[i][0]) {
      int tmp = sizes[i][0];
      sizes[i][0] = sizes[i][1];
      sizes[i][1] = tmp;
    }

    if (sizes[i][0] > max_w) max_w = sizes[i][0];
    if (sizes[i][1] > max_h) max_h = sizes[i][1];
  }

  answer = max_w * max_h;
  
  return answer;
}

int main(void) {
  vector<vector<int>> sizes = {
    {60, 50},
    {30, 70},
    {60, 30},
    {80, 40}
  };

  int result = solution(sizes);

  cout << "result: " << result << endl;

  return 0;
}