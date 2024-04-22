#include <iostream>
#include <string>
using namespace std;

int main(void) {
    bool sw = false;

    string str;

    cin >> str;

    for (int i=0; i<str.length()-1-i; i++) {
        if(str[i]!=str[str.length()-1-i]) sw = true;
    }

    if (sw) cout << 0 << endl;
    else cout << 1 << endl;

    return 0;
}