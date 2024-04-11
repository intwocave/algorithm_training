#include <iostream>
using namespace std;

int main(void) {
    int N, MIN;
    int res5, res3;
    bool sw = false, sango = false;

    cin >> N; // 3 <= N <= 5000
    if(N%3 == 0) sango = true;

    for (int i = 1;; i++) {
        if(sango) {
            res5 = N-3*i;
        } else {
            res5 = N-5*i;
        }
        if (res5 < 0) {
            if(!sw) {  
                cout << -1 << endl; 
                break;
            } else{
                cout << MIN << endl;
                break;
            }
        }
        else {
            int res35;
            if(sango) {
                res3 = res5/5;
                res35 = res5%5;
            } else {
                res3 = res5/3;
                res35 = res5%3;
            }
            if(res35 == 0) {
                if(!sw) {
                    sw = true;
                    cout << i << " : " << res3 << endl;
                    MIN = i+res3;
                } else {
                    sw = true;
                    if(i+res3 < MIN) {
                        cout << i << " : " << res3 << endl;
                        MIN = i+res3;
                    }
                }
            }
        }
    }

    return 0;
}