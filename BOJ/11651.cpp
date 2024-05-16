#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int a, b;
    for(int i=0; i<n; i++) {
        cin >> b >> a;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    for(auto a:v) cout << a.second << " " << a.first << '\n';

    return 0;
}