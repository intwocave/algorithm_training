#include <iostream>
#define ll unsigned long long
using namespace std;

ll factorial(int start, int end) {
    ll result = 1;
    for(int i = start; i > end; --i) {
        result *= i;
    }
    cout << "return: " << result << '\n';
    return result;
}

int main(void) {
    int t, n, m;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n >> m;
        cout << factorial(m, m-n) / factorial(n, 1) << '\n';
    }

    return 0;
}