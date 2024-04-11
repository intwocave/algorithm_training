#include <iostream>
using namespace std;

int main(void) {
    int sum = 0, A, B, V;

    cin >> A >> B >> V;

    /* for(int i = 1;; i++) {
        sum += A;
        if (sum >= V) {
            cout << i << endl;
            break;
        } else {
            sum -= B;
        }
    } */

    if(V%(A-B) == 0) {
        cout << V-B << endl;
    } else {
        cout << V%(A-B)+1 << endl;
    }

    return 0;
}