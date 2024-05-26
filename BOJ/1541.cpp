#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int res = 0;
    string str; cin >> str;
    vector<int> v_int;
    vector<char> v_char;

    for(int i=0, zen=0; i<str.length(); i++) {
        char opChar = str.at(i);
        if(opChar == '+' || opChar == '-') {
            int tmp_int = stoi(str.substr(zen, i-zen));
            v_int.push_back(tmp_int);

            char tmp_char = opChar;
            v_char.push_back(tmp_char);

            zen = i + 1;
        } else if(i == str.length()-1) {
            int tmp_int = stoi(str.substr(zen, i-zen+1));
            v_int.push_back(tmp_int);
        }
    }

    if(v_char.size() == 0) res = v_int[0];
    else {
        bool minus = false;
        for(int i=0; i<v_char.size(); i++) {
            if(minus) res -= v_int[i];
            else res += v_int[i];

            if(v_char[i] == '-') minus = true;
            if(i == v_char.size()-1) {
                if(minus) res -= v_int[v_char.size()];
                else res += v_int[v_char.size()];
            }
        }
    }

    cout << res << endl;

    return 0;

}