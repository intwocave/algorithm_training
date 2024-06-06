#include <iostream>
using namespace std;

int n, m, cnt;
int arr[1001][1001];
int vis[1001];

void dfs(int v) {
    vis[v] = 1;
    for(int i=1; i<=n; i++) if(arr[v][i] == 1 && vis[i] == 0) dfs(i);
}

int main(void) {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int u, v; cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    for(int i=1; i<=n; i++) {
        if(vis[i] == 1) continue;
        dfs(i);
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}