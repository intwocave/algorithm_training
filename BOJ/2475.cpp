#include <iostream>
using namespace std;

int main(void) {
    int kensyou = 0;
    for (int i=0; i<5; i++) {
        int tmp;
        cin >> tmp;
        kensyou += tmp*tmp;
    }
    cout << kensyou % 10 << endl;

    return 0;
}