#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int arr[3];

    do {
        cin >> arr[0] >> arr[1] >> arr[2];
        if(!(arr[0]||arr[1]||arr[2]))
            break;

        int max = arr[0], idx = 0, sum = 0;
        for(int i=1; i<3; i++)
            if(arr[i] > max) {
                max = arr[i];
                idx = i;
            }
        for(int i=0; i<3; i++) {
            if(i==idx) continue;
            sum += pow(arr[i], 2);
        }

        if(pow(arr[idx], 2) == sum)
            cout << "right" << endl;
        else 
            cout << "wrong" << endl;
    } while(true);

    return 0;
}