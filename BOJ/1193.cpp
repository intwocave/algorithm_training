#include <iostream>
using namespace std;

int main(void) {
    int x,i,sum;
    cin >> x;

    for(i=1, sum=1; !(x >= sum && x < sum+i); i++, sum+=i) {
        cout << "i: " << i << ", sum: " << sum << endl;
    }

    int idx = sum-x;

    cout << idx+1 << "/" << i-idx << endl;

    return 0;
}