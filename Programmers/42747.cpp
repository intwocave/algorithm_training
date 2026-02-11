#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
  sort(citations.begin(), citations.end(), greater<int>());

  int a = 0;
  for (int i = 1; i <= citations.size(); i++) {
    if (citations[i-1] >= i) a++;
  }

  return a;
}

int main(void) {
  // vector<int> citations = {3, 0, 6, 1, 5};
  // vector<int> citations = {10, 8, 5, 4, 3};
  vector<int> citations = {5, 5, 5};
  // 6, 5, 3, 1, 0
  // 5, 5, 5
  // 1, 1, 1

  const int result = solution(citations);

  cout << result << endl;

  return 0;
}