#include <iostream>
using namespace std;

int main(void) {
    int n, m; cin >> n >> m;
    int arr[n], brr[n]; for(int i=0; i<n; i++) arr[i] = i+1;
    for(int i=0; i<m; i++) {
        int a, b; cin >> a >> b;
        for(int j=a-1; j<b; j++) {
            brr[j] = arr[j];
        } for(int j=a-1, cnt=1; j<b; j++, cnt++) {
            arr[j] = brr[b-cnt];
        }
    }

    for(int i=0; i<n; i++) cout << arr[i] << ' ';

    return 0;
}