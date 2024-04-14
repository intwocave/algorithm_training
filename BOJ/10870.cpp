#include <iostream>
using namespace std;

int func(int i);

int main(void) {
    int N;
    cin >> N;

    cout << func(N) << endl;

    return 0;
}

int func(int i) {
    if(i == 0) {
        return 0;
    } else if (i == 1) {
        return 1;
    } else if (i >= 2) {
        return func(i-1)+func(i-2);
    } else {
        return -1;
    }
}