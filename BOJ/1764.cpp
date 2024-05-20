#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<string> v;
    set<string> mySet;
    
    for(int i=0; i<n; i++) {
        string str;
        cin >> str;
        mySet.insert(str);
        /* if (mySet.insert(str).second) {
            cout << str << " <- Set에 insert됨" << '\n';
        } else {
            cout << str << " <- Set에 insert되지 않음" << '\n';
        } */
    }

    /* for(auto a:mySet) {
        cout << a << " ";
    } */

    for(int i=0; i<m; i++) {
        string str;
        cin >> str;
        auto a = mySet.find(str);
        if (a != mySet.end()) 
            // cout << "mySet에서 " << *a << "요소를 찾음\n";
            // cout << str << '\n';
            v.push_back(str);
        else 
            // cout << "mySet에서 " << str << "요소를 찾을 수 없음\n";
            continue;
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;
    for(auto a : v) 
        cout << a << '\n';

    return 0;
}