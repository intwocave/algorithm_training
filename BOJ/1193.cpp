#include <iostream>
using namespace std;

int main(void) {
    int x,i,sum;
    cin >> x;

    for(i=1, sum=1; !(x >= sum && x < sum+i); sum+=i, i++) {
        // cout << "i: " << i << ", sum: " << sum << endl;
    }

    int idx = x-sum;
    // cout << "idx: " << idx << endl;

    if(i%2) {
        cout << i-idx << "/" << idx+1 << endl;
    } else {
        cout << idx+1 << "/" << i-idx << endl;
    }

    return 0;
}