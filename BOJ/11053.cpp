#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int *seq = new int[n+1];
    int *arr = new int[n+1];
    for (int i = 1; i <= n; i++) cin >> seq[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; i-j >= 0; j++) {
            if (seq [i-j] < seq[i]) {
                if (arr[i-j] + 1 > arr[i]) arr[i] = arr[i-j] + 1;
            }
        }
    }

    /* for (int i = 0; i < n+1; i++) {
        cout << seq[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n+1; i++) {
        cout << arr[i] << ' ';
    } */
    cout << *max_element(arr, arr+(n+1)) << endl;

    return 0;
}