#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N, MIN = -1;

	cin >> N;

	for(int i = 0; i < N; i++) {
		int con = i;
		for(int j = 0; j < to_string(i).length(); j++) {
			con += to_string(i)[j] - '0';
			// cout << con << " ";
		}
		if(con == N) {
			if (MIN == -1) {
				MIN = i;
			} else if (con < MIN) {
				MIN = i;
			}
			/*
			cout << "i: " << i << endl;
			cout << "con: " << con << endl;
			cout << "MIN: " << MIN << endl;
			*/
		}
	}

	if (MIN == -1) {
		cout << 0 << endl;
	} else {
		cout << MIN << endl;
	}
	
	return 0;
}
