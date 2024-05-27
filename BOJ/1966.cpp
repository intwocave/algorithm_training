#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

struct myData
{
    int idx;
    int pref;
};


int main(void) {
    int t; cin >> t;
    int n, m[t];
    

    for(int i=0; i<t; i++) {
        cin >> n >> m[i];
        queue<myData> q;
        vector<int> p;
        myData tmp;
        int cnt = 0;

        for(int j=0; j<n; j++) {
            int pref; cin >> pref;
            p.push_back(pref);
            tmp.idx = j;
            tmp.pref = pref;
            q.push(tmp);
        }

        while(q.size() > 0) {
            int max = *max_element(p.begin(), p.end());

            if(q.front().pref == max) {
                /* cout << "Pop: (" << q.front().idx << ", " 
                    << q.front().pref << ")" << endl; */

                cnt++;

                if(q.front().idx == m[i]) {
                    cout << cnt << '\n';
                    break;
                }

                q.pop();
                p.erase(max_element(p.begin(), p.end()));
            } else {
                /* cout << "Move to back: (" << q.front().idx << ", "
                    << q.front().pref << ")" << endl; */
                q.push(q.front()); // push back
                q.pop();
            }
        }
    }

    return 0;
}