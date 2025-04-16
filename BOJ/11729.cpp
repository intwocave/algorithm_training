
#include <iostream>

using namespace std;

// int count;

void hanoi(int n, int start, int end, int asist) {
    // count++;

    if(n==1) {
        cout << start << ' ' << end << '\n';
        return;
    }

    hanoi(n-1, start, asist, end);
    cout << start << ' ' << end << '\n';
    hanoi(n-1, asist, end, start);

    return;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;

    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 3, 2);
    // cout << count << endl;

    return 0;
}