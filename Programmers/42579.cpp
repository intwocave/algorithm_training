#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
  vector<int> answer;

  unordered_map<string, int> genre_rank;
  vector<pair<string, int>> v_genre_rank;

  for (int i = 0; i < genres.size(); i++) {
    genre_rank[genres[i]] += plays[i];
  }

  // for debug
  // cout << "print genre_rank and covnert to vector" << endl;
  for (auto const& a : genre_rank) {
    // cout << a.first << ' ' << a.second << endl;
    v_genre_rank.push_back(make_pair(a.first, a.second));
  }
  // cout << endl;

  // sort v_genre_rank
  sort(v_genre_rank.begin(), v_genre_rank.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
  });

  /* cout << "print v_genre_rank" << endl;
  for (auto const& a : v_genre_rank) {
    cout << a.first << ' ' << a.second << endl;
  } cout << endl; */

  for (auto const& [genre, x] : v_genre_rank) {
    vector<pair<int, int>> v;

    for (int i = 0; i < genres.size(); i++) {
      if (genres[i] == genre) {
        v.push_back({i, plays[i]});
      }
    }

    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
      return a.second > b.second;
    });

    int limit = 0;
    for (auto const& [idx, x] : v) {
      answer.push_back(idx);
      if (++limit >= 2) break;
    }
  }

  return answer;
}

int main(void) {
  vector<string> genres = {"classic", "pop", "classic", "classic", "pop"};
  vector<int> plays = {500, 600, 150, 800, 2500};

  vector<int> result = solution(genres, plays);

  cout << "result: " << endl;

  cout << '[';
  for (auto const& a : result) {
    cout << a << ' ';
  }
  cout << ']' << endl;

  return 0;
}