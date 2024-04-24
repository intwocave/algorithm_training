#include <iostream>
using namespace std;

int main(void) {
    int arr[9], sum=0, idx[2];

    for (int i=0; i<9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i=0; i<8; i++) {
        for (int j=i+1; j<9; j++) {
            if(arr[i] + arr[j] == sum-100) {
                idx[0] = i;
                idx[1] = j;
            }
        }
    }

    int new_arr[7];
    for (int i=0, j=0; i<9; i++) {
        if (i==idx[0] || i==idx[1]) continue;
        new_arr[j] = arr[i];
        j++;
    }

    bool sw;
    do {
        sw = false;
        for (int i=0; i<6; i++) {
            if(new_arr[i] > new_arr[i+1]) {
                int tmp = new_arr[i];
                new_arr[i] = new_arr[i+1];
                new_arr[i+1] = tmp;
                sw = true;
            }
        }
    } while(sw);

    for (int i=0; i<7; i++) cout << new_arr[i] << endl;
    

    return 0;
}