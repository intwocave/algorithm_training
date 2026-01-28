#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
  int n, m;
  cin >> n; // 3 <= N <= 10000

  vector<int> v; // 1 <= v[i] <= 100000

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  cin >> m; // n <= m <= 1000000000

  int result = 0;

  // filter
  int sum = 0;
  for (int i = 0; i < v.size(); i++) sum += v[i];

  if (sum <= m) {
    // get max value
    result = *max_element(v.begin(), v.end());
    cout << result << endl;

    return 0;
  }

  // BS
  for (int left = 0, right = m;;) {
    int middle = (left + right) / 2;
    // cout << middle << endl;
    int sum = 0;

    for (int j = 0; j < v.size(); j++) {
      if (v[j] < middle) sum += v[j];
      else sum += middle;
    }

    if (sum <= m) {
      left = middle;
    } else {
      right = middle;
    }

    if ((left+right)/2 == middle) {
      result = middle;
      break;
    }
  }

  cout << result << endl;

  return 0;
}