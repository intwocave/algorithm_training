#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int arr[n] = {};

    for(int a=0; a<m; a++) {
        int i, j, k;
        cin >> i >> j >> k;

        for(int b=i-1; b<=j-1; b++)
            arr[b] = k;
    }

    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}