#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(void) {
    stack<char> stk;

    string tmp;
    do {
        bool sw = true;
        while(!stk.empty()) stk.pop();
        // cin >> tmp;
        getline(cin, tmp);
        if(tmp.size() == 1 && tmp[0] == '.') break;
        char c;
        for(int i=0; i<tmp.size(); i++) {
            c = tmp.at(i);
            if(c == '(' || c == '[') {
                stk.push(c);
                // cout << "push: " << c << '\n';
            } else if(c == ')' || c == ']') {
                if(c == ')') c = '(';
                else c = '[';
                if(stk.size() == 0) sw = false;
                else if(stk.top() == c) {
                    stk.pop();
                    // cout << "pop: " << c << '\n';
                }
                else {
                    // cout << "top: " << stk.top() << " c: " << c << " -> no matching brace\n";
                    sw = false;
                }
            }
        }
        if(stk.size() > 0) sw = false;
        cout << (sw ? "yes" : "no") << endl;
    } while(true);

    return 0;
}