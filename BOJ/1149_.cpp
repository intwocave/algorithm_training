#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n+1][3] = {};

    for(int i=1; i<=n; i++) {
        int cost[3];
        cin >> cost[0] >> cost[1] >> cost[2];
        arr[i][0] = min(arr[i-1][1], arr[i-1][2]) + cost[0];
        arr[i][1] = min(arr[i-1][0], arr[i-1][2]) + cost[1];
        arr[i][2] = min(arr[i-1][0], arr[i-1][1]) + cost[2];
    }

    // for (int i=0; i<3; i++) cout << *(arr[n]+i) << endl;
    cout << *min_element(arr[n], arr[n]+3) << endl;

    return 0;
}