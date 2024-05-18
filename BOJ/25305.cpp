#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), greater<>());

    // for(auto a:v) cout << a << " ";
    cout << v[k-1] << endl;

    return 0;
}