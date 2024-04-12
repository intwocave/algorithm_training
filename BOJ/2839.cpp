#include <iostream>
using namespace std;

int main(void) {
    int N, MIN;
    bool sw = false;

    cin >> N;

    for (int i = 0; (N-5*i) >= 0; i++) {
        if((N-5*i)%3 == 0) {
            int san = i+(N-5*i)/3;
            if(!sw) {
                MIN = san;
                sw = true;    
            } else if (san < MIN) {
                MIN = san;
            }
        }
    }

    cout << (sw ? MIN : -1) << endl;

    return 0;
}