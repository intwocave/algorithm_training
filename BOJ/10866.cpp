#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    int n; cin >> n;
    deque<int> dq;

    for(int i=0; i<n; i++) {
        string str; cin >> str;
        if(!str.compare("push_back") || !str.compare("push_front")) {
            int tmp; cin >> tmp;
            if(!str.compare("push_back")) dq.push_back(tmp);
            else dq.push_front(tmp);
        }
        else if(!str.compare("pop_front")) {
            if(dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(!str.compare("pop_back")) {
            if(dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(!str.compare("front")) {
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
        }
        else if(!str.compare("back")) {
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
        }
        else if(!str.compare("size")) cout << dq.size() << '\n';
        else if(!str.compare("empty")) cout << (dq.empty() ? 1 : 0) << '\n';
        else cout << "wrong value!" << '\n';
    }

    return 0;
}