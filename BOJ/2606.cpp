#include <iostream>
using namespace std;

int n, m, cnt; 
int arr[101][101];
int vis[101];

void dfs(int v) {
    vis[v] = 1;
    // cout << v << " " << cnt << '\n';

    for(int i=1; i<=n; i++) {
        if(arr[v][i] == 1 && vis[i] == 0) {
            dfs(i);
        }
    }
}

int main(void) {
    cin >> n >> m;

    for(int i=0; i<m; i++) {
        int a, b; cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    dfs(1);
    for(int i=2; i<=100; i++) if(vis[i] == 1) cnt++;
    cout << cnt << endl;

    return 0;
}