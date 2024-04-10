#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, cnt = 0;
    int h, t, o, sw;

    cin >> N;

    for(int i = 1; i <= N; i++) {
        if (i < 100) cnt++;
        else {
            h = i / 100; t = i % 100 / 10; o = i % 10;
            sw = h - t;
            // cout << i << "는 " << h << " " << t << " " << o << endl;
            // cout << "공차는 " << sw << endl << endl;
            if ((t-o) == sw) {
                // cout << i << "는 공차수열이다" << endl;
                cnt++;
            }
        }
    }

    cout << cnt;
    
    return 0;
}