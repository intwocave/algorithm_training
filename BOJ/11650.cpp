#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* bool cmp(vector<int> &v1, vector<int> &v2) {
    if(v1[0]==v2[0])
        return v1[1]>v2[1];
    else
        return v1[0]<v2[0];
} */

int main(void) {
    // 1번
    vector<vector<int>> v = {};
    int p[2] = {};
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> p[0] >> p[1];
        v.push_back({p[0], p[1]});
    }

    // sort(v.begin(), v.end(), greater<>());
    // sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.end());

    for (int i=0; i<n; i++) {
        cout << v[i][0] << " " << v[i][1] << '\n';
    }

    /* // 2번
    vector<pair<int, int>> v;
    int n, p[2];
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> p[0] >> p[1];
        v.push_back(make_pair(p[0], p[1]));
        // v.push_back({p[0], p[1]});
    }

    sort(v.begin(), v.end());

    // 2.1
    for (int i=0; i<n; i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    // 2.2
    for (auto a : v) {
        cout << a.first << " " << a.second << '\n';
    } */

    return 0;
}