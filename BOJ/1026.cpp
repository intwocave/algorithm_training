#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n*2; i++) {
        int tmp;
        cin >> tmp;
        if(i>n-1) {
          b[i-n] = tmp;
          continue;
        } a[i] = tmp;
    }

    sort(a, a+n);
    sort(b, b+n, greater<>());

    /* for(int i=0; i<n; i++) {
        cout << "a[" << i << "]: " << a[i] << '\n';
        cout << "b[" << i << "]: " << b[i] << '\n';
    } */

    int s = 0;
    for(int i=0; i<n; i++) {
        s += a[i] * b[i];
    }
    cout << s << '\n';

    return 0;
}