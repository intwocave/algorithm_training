#include <iostream>
#include <deque>
using namespace std;

int cnt;

void move_left(deque<int> &dq) {
    int tmp = dq.front();
    dq.push_back(tmp);
    dq.pop_front();
    cnt++;
}

void move_right(deque<int> &dq) {
    int tmp = dq.back();
    dq.push_front(tmp);
    dq.pop_back();
    cnt++;
}

int find_index(deque<int> &dq, int val) {
    int tmp, off = 0;
    while(dq.front() != val) {
        tmp = dq.front();
        dq.push_back(tmp);
        dq.pop_front();
        off++;
    } for(int i=0; i<off; i++) {
        tmp = dq.back();
        dq.push_front(tmp);
        dq.pop_back();
    }

    return off;
}

int main(void) {
    deque<int> dq;
    int n, m; cin >> n >> m;
    int a[m];
    for(int i=1; i<=n; i++) dq.push_back(i);
    for(int i=0; i<m; i++) cin >> a[i];

    for(int i=0; i<m; i++) {
        int idx = find_index(dq, a[i]);
        if(idx <= dq.size()/2)
            while(dq.front() != a[i])
                move_left(dq);
        else
            while(dq.front() != a[i])
                move_right(dq);
        dq.pop_front();
    }

    cout << cnt << endl;

    return 0;
}