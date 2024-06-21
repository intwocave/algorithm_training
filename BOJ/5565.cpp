#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<9; i++) {
		int t; cin >> t;
		n -= t;
	}

	cout << n << endl;

	return 0;
}
