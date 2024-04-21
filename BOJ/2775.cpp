#include <iostream>
using namespace std;

int main(void) {
    int t, arr[15][15]={};

    for(int i=0; i<15; i++) {
        arr[0][i] = i+1;
        arr[i][0] = 1;
    }
    for(int i=1; i<15; i++) {
        for(int j=1; j<15; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    /* for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } */

    cin >> t;
    int k[t]={}, n[t]={};

    for(int i=0; i<t; i++)
        cin >> k[i] >> n[i];

    for(int i=0; i<t; i++) {
        cout << arr[k[i]][n[i]-1] << endl;
    }

    return 0;
}