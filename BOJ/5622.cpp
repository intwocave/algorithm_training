#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    // cout << "str의 길이: " << str.length() << endl;
    int n[str.length()] = {0,};
    int t = 0;

    for (int i = 0; i < str.length(); i++) {
        int n = (int)str.at(i) - 65;

        switch(n) {
            case 0 ... 2: t += 3; break;
            case 3 ... 5: t += 4; break;
            case 6 ... 8: t += 5; break;
            case 9 ... 11: t += 6; break;
            case 12 ... 14: t += 7; break;
            case 19 ... 21: t += 9; break;

            case 15 ... 18: t += 8; break;
            case 22 ... 25: t += 10; break;
        }
    }

    cout << t << endl;

    return 0;
}