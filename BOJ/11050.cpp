#include <iostream>
using namespace std;

int main(void) {
    int pastri[11][11] = {};
    int n, k;
    cin >> n >> k;

    for (int i=0; i<11; i++) {
        for (int j=0; j<=i; j++) {
            if (j==0 || j==i) {
                pastri[i][j] = 1;
            } else {
                pastri[i][j] = pastri[i-1][j] + pastri[i-1][j-1];
            }
            // cout << pastri[i][j] << " ";
        }
        // cout << endl;
    }

    cout << pastri[n][k] << endl;

    return 0;
}