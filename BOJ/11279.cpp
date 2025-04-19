#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    int N; cin >> N;
    priority_queue<int, vector<int>, less<int>> pq; // default

    for (int i = 0; i < N; i++) {
        unsigned int x; cin >> x;
        if (x > 0) {
            pq.push(x);
        } else {
            if (pq.size() == 0) {
                cout << 0 << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
            // cout.flush();
        }
    }

    return 0;
}