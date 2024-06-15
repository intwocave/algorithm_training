#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int n, f, cnt = 0; cin >> n >> f;

    int tmp = n/100*100;
    while(1) {
        if((tmp+cnt)%f==0) break;
        cnt++;
    }

    printf("%02d\n", cnt);

    return 0;
}