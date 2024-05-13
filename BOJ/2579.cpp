#include <iostream>
using namespace std;

int main(void) {
    int n, sum, arr[301] = {};
    cin >> n;

    for (int i=1; i<=n; i++) cin >> arr[i];

    sum = arr[n];
    for (int i=n, cnt=0; i>1;) {
        if(i==2 && cnt == 0) {
            sum += arr[i-1];
            i -= 1;
        } else if(i==2 && cnt == 1) {
            break;
        } else {
            if(arr[i-2] > arr[i-1]) {
                sum += arr[i-2];
                i -= 2;
                cnt = 0;
            }
            else if(arr[i-2] < arr[i-1] && cnt < 1) {
                sum += arr[i-1];
                i -= 1;
                cnt++;
            } else {
                sum += arr[i-2];
                i -= 2;
                cnt = 0;
            }
        }
    }

    cout << sum << endl;

    return 0;
}