#include <iostream>
using namespace std;

int main(void) {
	bool arr[30] = {false,};

	for(int i=0; i<28; i++) {
		int N;
		cin >> N;
		arr[N-1] = true;
	}

	for(int i=0; i<30; i++) {
		if(!arr[i]) {
			cout << i+1 << endl;
		}
	}
}
