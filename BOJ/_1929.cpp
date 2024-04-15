#include <iostream>
using namespace std;

int main(void) {
    int M, N;
    cin >> M >> N;

    /* for(int i=M; i<=N; i++) {
        int a=0;
        for(int j=2; j<=i; j++) {
            if(i%j==0) a++;
        }
        if(a==1) cout << i << endl;
    } */

    for(int i=M; i<=N; i++) {
        if(i==2 || i==3 || i==5 || i==7) cout << i << endl;
        else if(i!=1 && i%2 && i%3 && i%5 && i%7) {
            cout << i << endl;
        }
    }

    return 0;
}