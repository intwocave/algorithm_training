#include <iostream>
using namespace std;

int main(void) {
    int M, N;
    cin >> M >> N;
    int arr[N+1] = {};

    for(int i=1; i<=N; i++) arr[i] = i;

    for(int i=8; i<=N; i++) {
        if(arr[i]%2==0) arr[i] = 0;
    }

    return 0;
}