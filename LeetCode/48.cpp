#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  void rotate(vector<vector<int>>& matrix) {
    int tmp, sideSize = matrix[0].size();;
    
    // diagonal flip 
    for (int i = 0; i < sideSize; i++) {
      for (int j = i + 1; j < sideSize; j++) {
        tmp = matrix[j][i];
        matrix[j][i] = matrix[i][j];
        matrix[i][j] = tmp;
      }
    }

    // horizontal flip
    for (int i = 0; i < sideSize; i++) {
      for (int j = 0; j < sideSize/2; j++) {
        int counter = sideSize - 1 - j;        

        tmp = matrix[i][j];
        matrix[i][j] = matrix[i][counter];
        matrix[i][counter] = tmp;
      }
    }
  }
};

int main(void) {
  // vector<vector<int>> input_matrix(3, vector<int>(3, 0));
  vector<vector<int>> input_matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  Solution sol;

  cout << "Before" << endl;
  for (const auto& row : input_matrix) {
    for (const auto& var : row) {
      cout << var << " ";
    }
    cout << endl;
  }
  
  sol.rotate(input_matrix);
  
  cout << endl;
  cout << "After" << endl;
  for (const auto& row : input_matrix) {
    for (const auto& var : row) {
      cout << var << " ";
    }
    cout << endl;
  }

  return 0;
}