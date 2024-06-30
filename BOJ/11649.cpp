#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<string> v;
    
    for(int i=0; i<n; i++) {
        string s, t; cin >> s;
        for(int i=s.length()-1; i>=0; i--) {
            t.push_back(s[i]);
        }
        v.push_back(t);
    }

    sort(v.begin(), v.end());
    
    for(auto a : v) cout << a << endl;

    return 0;
}