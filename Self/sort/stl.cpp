#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> v;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i=0; i<n; i++) {
        cout << v[i] << endl;
        // 개행을 endl(버퍼를 바로 비움)로 하면 Timeout 문제가 발생하지만, 
        // endl이 아닌 개행 문자 '\n'(개행 문자만으로는 버퍼를 비우지 않음)을 
        // 사용하면 Timeout이 발생하지 않음
    }

    return 0;
}