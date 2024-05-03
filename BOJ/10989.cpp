#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int lay[10000+1] = {};
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        lay[num]++;
        // cout << lay[num] << " ";
    }

    for (int i=1; i<=10000; i++) {
        for(int j=0; j<lay[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}