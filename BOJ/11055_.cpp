#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> a(n+1, 0);
    vector<int> dp(n+1, 0);

    int result = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = a[i];
    }

    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        for (int j = 1; i-j >= 0; j++) {
            if (a[i] > a[i-j]) {
                dp[i] = max(dp[i], dp[i-j] + a[i]);
            }
        }
        if (dp[i] > result) result = dp[i];
    }

    // for (auto a : dp) {
    //     cout << a << ' ';
    // }

    cout << result << endl;

    return 0;
}