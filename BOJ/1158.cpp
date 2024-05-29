#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
    int n, k; cin >> n >> k;
    queue<int> q;
    vector<int> v;

    for(int i=1; i<=n; i++) q.push(i);

    int cnt = 0;
    while(q.size() > 0) {
        if(cnt < k-1) {
            q.push(q.front());
            q.pop();
            cnt++;
        } else {
            v.push_back(q.front());
            // cout << "pop: " << q.front() << endl;
            q.pop();
            cnt = 0;
        }
    }

    cout << "<";
    for(int i=0; i<v.size()-1; i++) cout << v[i] << ", ";
    cout << v[v.size()-1] << ">";

    return 0;
}