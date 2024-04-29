#include <iostream>
using namespace std;

int main(void) {
    int A, B, V;
    cin >> A >> B >> V;

    if (A >= V) cout << 1;
    else {
        cout << ((V-A)%(A-B) ? (V-A)/(A-B)+2 : (V-A)/(A-B)+1) << endl;
    }

    return 0;
}