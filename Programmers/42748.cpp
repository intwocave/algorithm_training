#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (auto c : commands) {
    const int i = c[0]-1;
    const int j = c[1]-1;
    const int k = c[2]-1;

    vector<int> newArr;

    for (int l = i; l <= j; l++) {
      newArr.push_back(array.at(l));
    }

    sort(newArr.begin(), newArr.end());

    const int seikai = newArr.at(k);

    answer.push_back(seikai);
  }
    
    return answer;
}