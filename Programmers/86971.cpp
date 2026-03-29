#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> wires) {
  int answer = -1;

  

  return answer;
}

int main(void) {
  int n = 9;
  vector<vector<int>> wires = {
    {1, 3},
    {2, 3},
    {3, 4},
    {4, 5},
    {4, 6},
    {4, 7},
    {7, 8},
    {7, 9},
  };

  int result = solution(n, wires);

  cout << "result: " << result << endl;

  return 0;
}