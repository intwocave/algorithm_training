#include <iostream>
#include <vector>
using namespace std;
#define ll unsigned long long

int main(void) {
    int n; cin >> n;
    vector<ll> dp;

    dp.push_back(0);
    dp.push_back(1);

    for(int i=2; i<=n; i++) {
        ll num = dp[i-2] + dp[i-1];
        dp.push_back(num);
    }

    cout << dp[n] << endl;

    return 0;
}