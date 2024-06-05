#include <iostream>
using namespace std;

int m, n, k, cnt;
int arr[51][51];

void dfs(int x, int y) {
    arr[x][y] = 0;

    if(arr[x][y+1] == 1) dfs(x, y+1);
    if(arr[x][y-1] == 1) dfs(x, y-1);
    if(arr[x+1][y] == 1) dfs(x+1, y);
    if(arr[x-1][y] == 1) dfs(x-1, y);
}

int main(void) {
    int t; cin >> t;
    
    for(int i=0; i<t; i++) {
        cin >> m >> n >> k;
        for(int j=0; j<k; j++) {
            int x, y; cin >> x >> y;
            arr[x][y] = 1;
        }

        cnt = 0;
        for(int j=0; j<n; j++) {
            for(int i=0; i<m; i++) {
                if(arr[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
        for(int i=0; i<51; i++) for(int j=0; j<51; j++) 
            arr[i][j] = 0;
    }

    return 0;
}