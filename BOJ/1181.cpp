#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string &v1, string &v2) {
    if (v1.length() == v2.length()) return v1 < v2;
    else if (v1.length() > v2.length()) return false;
    else return true;
}

int main(void) {
    vector<string> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end());
    // unique(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    sort(v.begin(), v.end(), cmp);

    // cout << "--- 정렬 결과 ---" << endl;
    // int cnt = 0;
    for (auto a : v) {
        cout << a << '\n';
        // cnt++;
    }
    // cout << "총 " << cnt << "개" << endl;

    return 0;
}