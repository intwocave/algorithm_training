#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k;
    vector<int> v, r;
    cin >> n >> k;
    for(int i=1; i<=n; i++) v.push_back(i);

    int idx=k-1;
    while(v.size() > 0) {
        while(idx >= v.size()) idx -= v.size();
        // cout << "v[" << idx << "]: " << v[idx] << " 를 제거합니다" << '\n';
        r.push_back(v[idx]);
        v.erase(v.begin() + idx);
        idx += k-1;
    }

    cout << "<";
    for(int i=0;; i++) {
        cout << r[i];
        if(i==r.size()-1) break;
        cout << ", ";
    }
    cout << ">";

    return 0;
}