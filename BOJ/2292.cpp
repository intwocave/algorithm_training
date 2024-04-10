#include <iostream>
using namespace std;

int main(void) {
    int sum = 1, N;

    cin >> N;
    
    for (int i = 1;; i++) {
        if (N <= sum) {
            cout << i;
            return 0;
        }
        else sum = sum + i*6;
    }

    return 0;
}