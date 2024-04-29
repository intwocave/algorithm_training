#include <iostream>
using namespace std;

int main(void) {
    int M, N;
    cin >> M >> N;

    for(int i=M; i<=N; i++) {
        if(i==2 || i==3 || i==5 || i==7) {
            cout << i << endl;
            continue;
        }
        else if(i==1 || !(i%2) || !(i%3) || !(i%5) || !(i%7)) continue;
        cout << i << endl;
    }

    return 0;
}