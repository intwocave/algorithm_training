#include <iostream>
#include <queue>
#define MAX_VERTEX 1001
#define TRUE 1
#define FALSE 0
using namespace std;

int n, m, v; 
int arr[MAX_VERTEX][MAX_VERTEX]; // RESET TO FALSE
int visited[MAX_VERTEX]; // RESET TO FALSE

void dfs(int v) {
    visited[v] = TRUE;
    cout << v << " ";

    for(int i=1; i<=n; i++) {
        if(arr[v][i] == TRUE && visited[i] == FALSE) {
            dfs(i);
        }
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);

    while(!q.empty()) {
        int node = q.front();
        visited[node] = TRUE;
        cout << node << " ";
        q.pop();
        
        for(int i=1; i<=n; i++) {
            if(arr[node][i] == TRUE && visited[i] == FALSE) {
                visited[i] = TRUE;
                q.push(i);
            }
        }
    }
    
}

int main(void) {
    cin >> n >> m >> v;
    for(int i=1; i<=m; i++) {
        int u, v; cin >> u >> v;
        arr[u][v] = TRUE;
        arr[v][u] = TRUE;
    }

    dfs(v);
    for(int i=0; i<=MAX_VERTEX; i++) visited[i] = FALSE;
    cout << '\n';
    bfs(v);

    return 0;
}