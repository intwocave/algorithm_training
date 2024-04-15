#include <iostream>
using namespace std;

int zero=0, one=0;

int fibonacci(int n) {
    if (n == 0) {
        // printf("0");
        zero++;
        return 0;
    } else if (n == 1) {
        // printf("1");
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void) {
    int T;
    cin >> T;
    int arr[T] = {0,};

    for(int i=0; i<T; i++) cin >> arr[i];
    for(int i=0; i<T; i++) {
        fibonacci(arr[i]);
        cout << zero << " " << one << endl;
        zero = one = 0;
    }

    return 0;
}