#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<short> v;
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        short num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i=0; i<n; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}