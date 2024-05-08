#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int bs(vector<int>& v, int start, int end, int key) {
    // int S = start;
    int M = (start+end)/2;
    // int E = end;

    // if(S==E && v[M] != key) return 0;
    if(start > end) return 0;
    if(v[M] == key) return 1;

    if(v[M] < key) return bs(v, M+1, end, key);
    else return bs(v, start, M-1, key); 
}

int main(void) {
    int n, m;
    cin >> n;

    vector<int> v;
    
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cin >> m;
    int arr[m];
    for (int i=0; i<m; i++) cin >> arr[i];

    sort(v.begin(), v.end());

    for (int i=0; i<m; i++) cout << bs(v, 0, v.size()-1, arr[i]) << '\n';

    return 0;
}