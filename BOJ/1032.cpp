#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    string str;
    cin >> str;
    for(int i=1; i<n; i++) {
        string tmp;
        cin >> tmp;
        for(int j=0; j<str.size(); j++) {
            if(str[j] != tmp[j]) {
                str[j] = '?';
            }
        }
    }

    cout << str << endl;

    return 0;
}