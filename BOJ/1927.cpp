#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        if(!tmp) {
            if(pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(tmp);
        }
    }

    return 0;
}