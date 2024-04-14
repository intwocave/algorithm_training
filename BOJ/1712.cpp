#include <iostream>
using namespace std;

int main(void) {
	int i, A, B, C;

	cin >> A >> B >> C;

	if (B >= C) {
		cout << -1 << endl;
	} else {
		/*
		for (i = 1; C*i <= A+B*i; i++) {
			cout << C*i << " <= " << A+B*i << endl;
			cout << A/(C-B) << endl;
			cout << i << endl << endl;
		}
		cout << i  << endl;
		*/
		cout << A/(C-B)+1 << endl;
	}

	return 0;
}
