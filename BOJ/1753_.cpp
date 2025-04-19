/*
* BOJ 1753
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1 ≤ V ≤ 20,000, 1 ≤ E ≤ 300,000
    int V, E, K; cin >> V >> E >> K;

    // adjacent node
    vector<pair<int, int>> adj[V+1];

    // distance array
    vector<int> dist(V+1, numeric_limits<int>::max());

    for (int i = 0; i < E; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    // pq
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[K] = 0;
    pq.push({0, K});

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_dist > dist[current_node]) continue;

        for (auto node : adj[current_node]) {
            if (current_dist + node.second < dist[node.first]) {
                dist[node.first] = current_dist + node.second;
                pq.push({dist[node.first], node.first});
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] == numeric_limits<int>::max())
            cout << "INF\n";
        else 
            cout << dist[i] << '\n';
    }
    
    return 0;
}