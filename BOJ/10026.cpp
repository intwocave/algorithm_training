#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int i, int j, vector<vector<char>>* v, vector<vector<bool>>* vis) {
    // (i, j) 노드 방문
    (*vis)[i][j] = true;

    queue<pair<int, int>> q;
    q.push({i, j});

    while(!q.empty()) {
        auto node = q.front();
        int i = node.first;
        int j = node.second;
        q.pop();

        if (j+1 < v->size() && (*v)[i][j] == (*v)[i][j+1] && !(*vis)[i][j+1]) {
            q.push({i, j+1});
            (*vis)[i][j+1] = true;
        }
        if (j-1 >= 0 && (*v)[i][j] == (*v)[i][j-1] && !(*vis)[i][j-1]) {
            q.push({i, j-1});
            (*vis)[i][j-1] = true;
        }
        if (i+1 < v->size() && (*v)[i][j] == (*v)[i+1][j] && !(*vis)[i+1][j]) {
            q.push({i+1, j});
            (*vis)[i+1][j] = true;
        }
        if (i-1 >= 0 && (*v)[i][j] == (*v)[i-1][j] && !(*vis)[i-1][j]) {
            q.push({i-1, j});
            (*vis)[i-1][j] = true;
        }
    }
}

int main(void) {
    // 1 <= N <= 100
    int N, tmp; cin >> N;

    vector<vector<char>> v(N, vector<char>(N, ' '));
    vector<vector<bool>> vis(N, vector<bool>(N, false));

    // RGB 값 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }

    // 비적록색약
    tmp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (vis[i][j] == false) { // 방문하지 않은 노드일 때만
                bfs(i, j, &v, &vis);
                tmp++;
            }
        }
    }
    cout << tmp << ' ';

    // 그래프의 R과 G를 같게 변경, Visited를 초기화
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(v[i][j] == 'G') v[i][j] = 'R';
            vis[i][j] = 0;
        }
    }

    // 적록색약
    tmp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (vis[i][j] == false) { // 방문하지 않은 노드일 때만
                bfs(i, j, &v, &vis);
                tmp++;
            }
        }
    }
    cout << tmp << endl;

    return 0;
}