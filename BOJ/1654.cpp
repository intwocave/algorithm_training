#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int k, n, result = 0; cin >> k >> n;
    vector<int> v(k, 0);
    for (int i = 0; i < k; i++) cin >> v[i];

    long long left = 1;
    long long right = *max_element(v.begin(), v.end());

    while (left <= right) {
        long long mid = (left + right) / 2;

        int count = 0;

        for (int i = 0; i < k; i++)
            count += v[i] / mid;

        if (count >= n) {
            result = mid;
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    
    cout << result << endl;

    return 0;
}