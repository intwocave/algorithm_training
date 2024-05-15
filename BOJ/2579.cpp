#include <iostream>
using namespace std;

int main(void) {
    int n, arr[2][301] = {};
    cin >> n;

    cin >> arr[1][1];
    bool cnt[2] = {false, false};
    for (int i=2; i<=n; i++) {
        cin >> arr[1][i];
        arr[0][i] = arr[1][i];

        if(arr[0][i-1] > arr[0][i-2] && cnt[0] == false) {
            arr[0][i] += arr[0][i-1];
            cnt[0] = true;
        } else { 
            arr[0][i] += arr[0][i-2];
            cnt[0] = false;
        }

        if(arr[1][i-1] > arr[1][i-2] && cnt[1] == false) {
            arr[1][i] += arr[1][i-1];
            cnt[1] = true;
        } else { 
            arr[1][i] += arr[1][i-2];
            cnt[1] = false;
        }
    }
    
    /* cout << endl;
    for(int i=0; i<=n; i++) {cout << arr[0][i] << '\n';}
    cout << endl;
    for(int i=0; i<=n; i++) {cout << arr[1][i] << '\n';} */
    // cout << "arr[0][" << n << "] = " << arr[0][n] << endl;
    // cout << "arr[1][" << n << "] = " << arr[1][n] << endl;
    cout << max(arr[0][n], arr[1][n]) << endl;

    return 0;
}