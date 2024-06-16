#include <iostream>
using namespace std;

int main(void) {
    int cnt=0;
    for(int i=0; i<8; i++) for(int j=0; j<8; j++) {
        char ch; cin >> ch;
        if((j+(i%2))%2==0 && ch=='F') cnt++;
    }

    cout << cnt << endl;

    return 0;
}