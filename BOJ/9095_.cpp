#include <iostream>
using namespace std;

int main(void) {
    int arr[10+2]={0,1,1};
    int t;
    cin >> t;
    int val[t];

    for(int i=0; i<t; i++) {
        cin >> val[i]; 
    }

    // cout << "--- Table start ---" << endl;
    // cout << "1: " << arr[2] << endl;
    for(int i=1+2; i<10+2; i++) {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        // cout << i-1 << ": " << arr[i] << endl;
    }
    // cout << "--- Table end ---" << endl;

    for(int i=0; i<t; i++) {
        cout << arr[val[i]+1] << endl;
    }

    return 0;
}