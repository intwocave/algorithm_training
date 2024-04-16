#include <iostream>
using namespace std;

int main(void) {
    int K, arr[100000]={}, top=0;
    cin >> K;

    for(int i=0; i<K; i++) {
        int val;
        cin >> val;
        if(val==0) {
            top--;
        } else {
            arr[top] = val;
            top++;
        }
    }

    int sum=0;
    for(int i=0; i<top; i++) {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}