#include <iostream>
using namespace std;

int main(void) {
    int n, arr[10000], cnt=0;
    cin >> n;
    
    if (n==1) {return 0;}

    for (int i=2; n!=1;) {
        if (n%i==0) {
            n/=i;
            arr[cnt] = i;
            i=2; cnt++;
        } else {
            i++;
        }
    }

    for(int i=0; i<cnt; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}