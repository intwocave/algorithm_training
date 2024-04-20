#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    unsigned char arr[n] = {0,};

    for(int i=0; i<n; i++)
        arr[i] = i+1;

    for(int i=0; i<m; i++) {
        int a, b, tmp;
        cin >> a >> b;
        tmp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = tmp;
    }

    for(int i=0; i<n; i++)
        cout << (int)arr[i] << " ";

    return 0;
}