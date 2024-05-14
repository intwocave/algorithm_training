#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, ans = 0;
    cin >> n;
    int arr[n][3];
    int retu[3] = {}, start;

    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i=0, sum, z; i<3; i++) {
        sum = arr[0][i];
        z = i;
        for(int j=1; j<n; j++) {
            switch(z)
            {
            case 0:
                if(arr[j][1] > arr[j][2]) {
                    sum += arr[j][2];
                    z = 2;
                } else if(arr[j][1] == arr[j][2]) {
                    sum += arr[j][2];
                    z = 2;
                    // cout << "arr[" << j << "][1] == arr[" << j << "][2]" << endl;
                } else {
                    sum += arr[j][1];
                    z = 1;
                } break;
            case 1:
                if(arr[j][0] > arr[j][2]) {
                    sum += arr[j][2];
                    z = 2;
                } else if(arr[j][0] == arr[j][2]) {
                    sum += arr[j][2];
                    z = 2;
                    // cout << "arr[" << j << "][0] == arr[" << j << "][2]" << endl;
                } else {
                    sum += arr[j][0];
                    z = 0;
                } break;
            case 2:
                if(arr[j][0] > arr[j][1]) {
                    sum += arr[j][1];
                    z = 1;
                } else if(arr[j][0] == arr[j][1]) {
                    sum += arr[j][1];
                    z = 1;
                    // cout << "arr[" << j << "][0] == arr[" << j << "][1]" << endl;
                } else {
                    sum += arr[j][0];
                    z = 0;
                } break;
            }
        }
        retu[i] = sum;
    }

    for(auto a : retu) cout << a << " ";
    cout << endl << *min_element(retu, retu + 3) << endl;

    return 0;
}