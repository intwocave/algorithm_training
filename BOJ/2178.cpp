#include <iostream>
#include <queue>
using namespace std;

int n, m;
int map[101][101];
int cnt[101][101];

void bfs() {
    queue<pair<int,int>> q;
    int x=0, y=0;
    q.push(make_pair(x, y));
    cnt[x][y] = 1;

    while(!q.empty()) {
        pair tmp = q.front();
        x = tmp.first; y = tmp.second;
        map[x][y] = 0;
        q.pop();

        if(x==n-1 && y==m-1) break;

        if(!(x-1<0)) if(map[x-1][y] == 1) {
            q.push(make_pair(x-1, y));
            map[x-1][y] = 0;
            cnt[x-1][y] = cnt[x][y] + 1;
        }
        if(!(x+1>100)) if(map[x+1][y] == 1) {
            q.push(make_pair(x+1, y));
            map[x+1][y] = 0;
            cnt[x+1][y] = cnt[x][y] + 1;
        }
        if(!(y-1<0)) if(map[x][y-1] == 1) {
            q.push(make_pair(x, y-1));
            map[x][y-1] = 0;
            cnt[x][y-1] = cnt[x][y] + 1;
        }
        if(!(y+1>100)) if(map[x][y+1] == 1) {
            q.push(make_pair(x, y+1));
            map[x][y+1] = 0;
            cnt[x][y+1] = cnt[x][y] + 1;
        }
    }
}

int main(void) {
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        char c[m]; cin >> c;
        for(int j=0; j<m; j++) map[i][j] = c[j]-48;
    }

    /* cout << "init map: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout << map[i][j] << ' ';
        cout << '\n';
    }

    cout << "init cnt: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout << cnt[i][j] << ' ';
        cout << '\n';
    } */

    bfs(); cout << cnt[n-1][m-1] << endl;

    /* cout << "processed map: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout << map[i][j] << ' ';
        cout << '\n';
    }

    cout << "processed cnt: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout << cnt[i][j] << ' ';
        cout << '\n';
    } */

    return 0;
}