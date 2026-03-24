#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
  int answer = 0;

  int a = clothes.size();

  unordered_map<string, int> m;

  for (auto const& a : clothes) {
    if (m.count(a[1]) > 0) {
      m[a[1]]++;
    } else {
      m.insert({a[1], 1});
    }
  }

  int tmp = 1;
  for (auto const& a : m) {
    tmp *= (a.second + 1);
  }
  tmp--;

  answer = tmp;

  return answer;
}

int main(void) {
  vector<vector<string>> clothes = {
    {"yellow_hat", "headgear"},
    {"blue_sunglasses", "eyewear"},
    {"green_turban", "headgear"},
    {"black_cat", "footgear"},
  }; // 4(하나만 끼는 경우) + 5(두개 끼는 경우) + 2(세 개 끼는 경우)

  /* vector<vector<string>> clothes = {
    {"crow_mask", "face"},
    {"blue_sunglasses", "face"},
    {"smoky_makeup", "face"},
  }; */ // => 3

  int result = solution(clothes);

  cout << "result: " << result << endl;

  return 0;
}