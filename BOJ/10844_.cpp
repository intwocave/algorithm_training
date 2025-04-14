#include <iostream>

using namespace std;

int main(void) {
    int n; cin >> n;
    unsigned int dp[101][10] = {0,};

    dp[1][0] = 0;
    for (int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= 100; i++) {
        dp[i][0] = dp[i-1][1];
        dp[i][9] = dp[i-1][8];
        for (int j = 1; j <= 8; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            dp[i][j] %= 1000000000;
        }

        /* for (int k = 0; k <= 9; k++) {
            cout << dp[i][k] << ' ';
        } */
       cout << dp[i][0] << ", " << dp[i][9] << endl;
    }

    unsigned int result = 0;
    for (int i = 0; i <= 9; i++) {
        result = (result + dp[n][i]) % 1000000000;
    }
    cout << result << endl;

    return 0;
}