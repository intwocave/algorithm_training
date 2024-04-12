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
        if(A-B == 1) {
            cout << V/(A-B)-B << endl;
        } else {
            cout << V/(A-B) << endl;
        }
    } else {
        if((V/(A-B)*(A-B)+A) >= V) {
            cout << V/(A-B)+1 << endl;
        } else {
            cout << V/(A-B) << endl;
        }
    }

    return 0;
}