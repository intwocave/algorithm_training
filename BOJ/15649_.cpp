#include <iostream>
using namespace std;

int n, m;
int arr[8+1];
int vis[8+1];

void dfs(int cnt) {
    if(cnt == m) {
        for(int i=0; i<m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1; i<=n; i++) {
        if(vis[i] == 0) {
            arr[cnt] = i;
            vis[i] = 1;
            dfs(cnt+1);
            vis[i] = 0;
        }
    }
}

int main(void) {
    cin >> n >> m;

    dfs(0);

    return 0;
}