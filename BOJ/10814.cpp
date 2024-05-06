#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 bool cmp(const pair<int,string> &tar, const pair<int,string> &ori) {
    return tar.first < ori.first;
 }

int main(void) {
    vector<pair<int, string>> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int num; string str;
        cin >> num >> str;
        v.push_back(make_pair(num, str));
    }

    /* cout << "Before: " << endl;
    for(auto a : v) cout << a.first << " " << a.second << '\n'; */

    stable_sort(v.begin(), v.end(), cmp);
    /* bool sw;
    do {
        sw = false;
        for(int i=0; i<n-1; i++) {
            if(v[i].first > v[i+1].first) {
                auto a = v[i];
                v[i] = v[i+1];
                v[i+1] = a;
                sw = true;
            }
        }
    } while(sw); */

    /* cout << "After: " << endl; */
    for(auto a : v) cout << a.first << " " << a.second << '\n';

    return 0;
}