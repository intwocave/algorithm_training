#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<int> r;

    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());

    int sp = v[0][0], ep = v[0][1];
    for(int i=0, cnt=1; v[i][0] < ep; i++) {
        
    }

    cout << '\n';
    for(auto a:v) cout << a[0] << " " << a[1] << "\n";

    return 0;
}