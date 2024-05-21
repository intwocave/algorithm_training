#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n+1] = {};
    int dp[n+1] = {};
    for(int i=1; i<=n; i++) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }

    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];
    dp[3] = max(max(dp[3-3] + arr[3-1] + arr[3], dp[3-2] + arr[3]), dp[3-1]);
    // dp[4] = max(dp[4-3] + arr[4-1] + arr[4], dp[4-1]);
    for(int i=4; i<=n; i++) 
        dp[i] = max(max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i]), dp[i-1]);

    /* 
    for(int i=1; i<=n; i++) 
        cout << "dp[" << i << "] = " << dp[i] << '\n';
     */

    // cout << *max_element(dp, dp+(n+1)) << endl;
    cout << dp[n] << endl;

    return 0;
}