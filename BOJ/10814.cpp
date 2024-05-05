#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 bool cmp()

int main(void) {
    vector<pair<int, string>> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int num; string str;
        cin >> num >> str;
        v.push_back(make_pair(num, str));
    }

    sort(v.begin(), v.end());

    for(auto a : v) cout << a.first << " " << a.second << '\n';

    return 0;
}