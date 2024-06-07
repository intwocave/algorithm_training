#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int a[n][2] = {};

	for(int i=0; i<n; i++) {
		int x, y; cin >> x >> y;
		a[i][0] = x;
		a[i][1] = y;
	}

	for(int i=0; i<n; i++) {
		int cnt = 1;

		for(int j=0; j<n; j++)
			if(a[i][0] < a[j][0] && a[i][1] < a[j][1])
				cnt++;

		cout << cnt << ' ';
	}

	return 0;
}
