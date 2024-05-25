#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    // 배열 초기화 안 햇더니 채점시 계속 틀렸다고 함..
    int arr[n+1] = {}, dp[n+1] = {};

    for(int i=1; i<=n; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
        /* if(num >= 0) {
            if(dp[i-1] < 0) continue;
            else dp[i] += dp[i-1];
        } else {
            // if(dp[i-1] + num >= 0) {
                dp[i] = dp[i-1] + num;
            // }
        } */
    }

    /* cout << "arr: ";
    for(int i=1; i<=n; i++) {
        cout << arr[i] << ' ';
    } cout << '\n';
    cout << "dp:  ";
    for(int i=1; i<=n; i++) {
        cout << dp[i] << ' ';
    } cout << '\n';
    cout << "Maximum dp value: " << *max_element(dp+1, dp +n+1) << endl; */
    cout << *max_element(dp + 1, dp + n+1) << endl;

    return 0;
}