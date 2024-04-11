#include <iostream>
using namespace std;

int main(void) {
    int N, V, cnt = 0;
    cin >> N;
    int arr[N] = {0,};

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> V;
    for(int i = 0; i < N; i++) {
        if (arr[i] == V){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}