#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n, k; cin >> n >> k;
    vector<pair<int,int>> items(n+1);
    vector<int> dp(k+1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> items[i].first >> items[i].second;
    }

    for (int i = 1; i <= n; i++) {
        int w = items[i].first;
        int v = items[i].second;

        for (int j = k; j >= w; j--) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    cout << dp[k] << endl;

    return 0;
}