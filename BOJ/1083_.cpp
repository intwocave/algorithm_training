#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s, a[51] = {}; cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> s;

    for(int i=0; i<n;) {
        if(a[i]>a[i+1]) i++;
        else {
            int max_idx = max_element(&a[i], &a[min(i+s, n-1)]+1) - &a[i];
            // cout << "max_idx: " << max_idx << endl;
            for(int j=max_idx; j>0; j--) {
                // cout << "swap: " << a[i+j] << ", " << a[i+j-1] << '\n';
                swap(a[i+j], a[i+j-1]);
                s--;
                if(s==0) break;
            }
            i++;
        }
        if(s==0) break;
    }

    for(int i=0; i<n; i++) cout << a[i] << ' ';

    return 0;
}