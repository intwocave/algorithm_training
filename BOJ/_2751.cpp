#include <iostream>
using namespace std;

int main(void) {
    int N;

    cin >> N;
    int arr[N] = {0,};

    // cout << sizeof(arr) / 4 << endl;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    /* bool sw; // Bubble sort
    int tmp;
    do {
        sw = false;
        for(int j = 0; j < (sizeof(arr)/4 - 1); j++) {
            for(int i = 0; i < (sizeof(arr)/4 - 1) - j; i++) {
                if(arr[i] > arr[i+1]) {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sw = true;
                }    
            }
        }
    } while(sw); */

    for(int i=0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}