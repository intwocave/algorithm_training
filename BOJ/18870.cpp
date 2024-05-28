#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n; cin >> n;
    int a[n];
    vector<int> v;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        v.push_back(a[i]);
        // if(find(v.begin(), v.end(), a[i]) == v.end()) 
        //     v.push_back(a[i]);
    } 
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // for(auto a : v) cout << a << " ";

    for(int i=0; i<n; i++)
        // cout << find(v.begin(), v.end(), a[i]) - v.begin() << " ";
        cout << lower_bound(v.begin(), v.end(), a[i]) - v.begin() << " ";

    return 0;
}