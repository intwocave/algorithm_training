#include <iostream>
#define ll unsigned long long
using namespace std;

ll factorial(int start, int end) {
    ll result = 1;
    for(int i = start; i > end; --i) {
        result *= i;
    }
    // cout << "return: " << result << '\n';
    return result;
}

int main(void) {
    int t, n, m, res=1;
    cin >> t;
    for(int i=0; i<t; i++, res = 1) {
        cin >> n >> m;
        /* ll a = factorial(m, m-n);
        ll b = factorial(n, 1);
        cout << (double)a / b << '\n'; */

        for(int i=m, enu=1; i>m-n; enu++, i--) {
            res *= i;
            res /= enu;
        }
        cout << res << endl;
    }

    return 0;
}