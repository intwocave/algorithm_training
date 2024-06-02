#include <iostream>
#include <cmath>
using namespace std;
#define ll unsigned long long

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        int a, b, ans = 0;
        cin >> a >> b;
        ans = a;
        for(int j=1; j<b; j++) {
            ans = ans%10 * a;
            // cout << "ans: " << ans << '\n';
        }
        if(ans%10 == 0) cout << 10 << '\n';
        else cout << ans%10 << '\n';
    }

    return 0;
}