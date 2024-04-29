#include <iostream>
using namespace std;

int main(void) {
    int t, n;
    cin >> t;
    int arr[41][2] = {
        {1, 0}, 
        {0, 1}
    };

    for(int i=2; i<41; i++) {
        arr[i][0] = arr[i-1][0] + arr[i-2][0];
        arr[i][1] = arr[i-1][1] + arr[i-2][1];
        // cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    for(int i=0; i<t; i++) {
        cin >> n;
        cout << arr[n][0] << " " << arr[n][1] << endl;
    }

    return 0;
}