#include <iostream>
using namespace std;

int main(void) {
    int t, a, b, min=0, max=0;
    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> a >> b;

        for (int j=1; j<=a && j<=b; j++) {
            if(a%j==0 && b%j==0) {
                max = j;
            }
        }

        min = a*b / max;

        cout << min << endl;
    }

    return 0;
}