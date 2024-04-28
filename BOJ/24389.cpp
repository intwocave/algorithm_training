#include <iostream>
using namespace std;

int main(void) {
    int32_t n,bosu;
    cin >> n;

    bosu = ~n+1;

    int res = n^bosu;
    int cnt=0;

    for (int i=0; i<32; i++) {
        if(res%2) cnt++;
        // cout << (res%2 ? 1:0);
        res = res>>1;
    }

    cout << cnt << endl;

    return 0;
}