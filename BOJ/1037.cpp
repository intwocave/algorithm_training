#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    /* if(v.size() == 1) {
        cout << v[0] * 2 << endl;
    } else {
        cout << *min_element(v.begin(), v.end()) * 
        *max_element(v.begin(), v.end()) << endl;
    } */

    cout << *min_element(v.begin(), v.end()) * 
        *max_element(v.begin(), v.end()) << endl;

    return 0;
}