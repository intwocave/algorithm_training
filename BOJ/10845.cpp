#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    queue<int> q;
    string str;

    for(int i=0; i<n; i++) {
        cin >> str;
        if(!str.compare("push")) {
            int tmp;
            cin >> tmp;
            q.push(tmp);
        } else if(!str.compare("pop")) {
            if(!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            } else {
                cout << -1 << '\n';
            }
        } else if(!str.compare("size")) {
            cout << q.size() << '\n';
        } else if(!str.compare("empty")) {
            cout << (q.empty() ? 1 : 0) << '\n';
        } else if(!str.compare("front")) {
            if(!q.empty()) {
                cout << q.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else if(!str.compare("back")){
            if(!q.empty()) {
                cout << q.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else {
            cout << "wrong input!" << '\n';
        }
    }

    return 0;
}