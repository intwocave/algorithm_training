#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
  vector<int> answer;

  int hap = brown + yellow;
  int a, b;

  for (int tmp_a = hap; (tmp_a >= (float)hap/tmp_a); tmp_a--) {
    if (hap%tmp_a == 0) if (((tmp_a-2) * (hap/tmp_a-2) + brown) == hap) {
      a = tmp_a;
      b = hap/tmp_a;

      break;
    }
  }

  answer.push_back(a);
  answer.push_back(b);

  return answer;
}

int main(void) {
  int brown = 26, yellow = 10;

  vector<int> result = solution(brown, yellow);

  cout << "result: [" << result[0] << ", " << result[1] << ']' << endl;

  return 0;
}