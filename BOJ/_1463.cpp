#include <iostream>
using namespace std;

int main(void) {
    int N, n1, n2, cnt1, cnt2;
    cin >> N;

    n1 = n2 = N;

    for(cnt1 = 0; n1 != 1; cnt1++) {
        if(n1%3==0) n1 /= 3;
        else if((n1-1)%3==0) n1--;
        else if (n1%2==0) n1 /= 2;
        else n1--;
        // cout << n1 << endl;
    }

    for(cnt2 = 0; n2 != 1; cnt2++) {
        if(n2%3==0) n2 /= 3;
        else if (n2%2==0) n2 /= 2;
        else n2--;
        // cout << n2 << endl;
    }

    cout << (cnt1<cnt2 ? cnt1 : cnt2) << endl;

    return 0;
}