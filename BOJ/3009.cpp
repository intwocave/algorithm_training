#include <iostream>
using namespace std;

int main(void) {
    unsigned char *arr1 = new unsigned char[1000] {};
    unsigned char *arr2 = new unsigned char[1000] {};

    for(int i=0; i<3; i++) {
        int N, M;
        cin >> N >> M;
        arr1[N-1]++;
        arr2[M-1]++;
    }

    for (int i=0; i<1000; i++) {
        if(arr1[i]==1) cout << i+1;
    }

    cout << " ";

    for (int i=0; i<1000; i++) {
        if(arr2[i]==1) cout << i+1 << endl;
    }

    return 0;
}