#include <iostream>
using namespace std;

int main(void) {
    int t, h, w, n;
    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> h >> w >> n;
        if(n%h != 0) cout << n%h;
        else cout << h;
        
        cout.width(2); cout.fill('0');
        cout << (n%h ? n/h+1 : n/h) << endl;
    }

    return 0;
}