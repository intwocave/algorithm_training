// 단지번호붙이기

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int arr[100][100] = { 0, };
bool vis[100][100] = { false, };
int danji;

int bfs(int x, int y) {
    if (arr[x][y] == 0) return 0;
    danji++;

    int count = 0;

    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty()) {
        auto [cx, cy] = q.front();
        q.pop();
        vis[cx][cy] = true;
        count++;
        if (vis[cx+1][cy] == false && arr[cx+1][cy] == 1) {
            q.push({cx+1, cy});
            vis[cx+1][cy] = true;
        }
        if (vis[cx-1][cy] == false && arr[cx-1][cy] == 1) {
            q.push({cx-1, cy});
            vis[cx-1][cy] = true;
        }
        if (vis[cx][cy+1] == false && arr[cx][cy+1] == 1) {
            q.push({cx, cy+1});
            vis[cx][cy+1] = true;
        }
        if (vis[cx][cy-1] == false && arr[cx][cy-1] == 1) {
            q.push({cx, cy-1});
            vis[cx][cy-1] = true;
        }
    }

    // 요소 개수 반환
    return count;
}

int main(void) {
    int sq;
    vector<int> v;
    cin >> sq;

    // 한 변의 길이가 sq인 정사각형 동적 배열 생성
    /* int **arr = new int*[sq];
    for (int i = 0; i < sq; i++)
        arr[i] = new int[sq]; */

    for (int i = 0; i < sq; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < sq; j++) {
            arr[i][j] = line[j] - '0';
        }
    }

    // debug
    /* for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    } */

    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            // go bfs
            if (vis[i][j] == false) {
                int c = bfs(i, j);
                if (c > 0) {
                    v.push_back(c);
                    // cout << c << endl;
                }
            }
        }
    }

    sort(v.begin(), v.end());

    // cout << "result" << endl;
    cout << danji << endl;
    for (auto a : v) {
        cout << a << '\n';
    }

    return 0;
}