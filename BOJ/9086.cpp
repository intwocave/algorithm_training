#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    char arr[n][2];
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        arr[i][0] = s[0];
        arr[i][1] = s[s.size()-1];
    }

    for(int i=0; i<n; i++) {
        cout << arr[i][0] << arr[i][1] << endl;
    }

    return 0;
}