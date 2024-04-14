#include <iostream>

using namespace std;

int main(void) {
	int N, M, MAX, MIN;
	cin >> N >> M;

	for(int i=1; i<=(N<M?N:M); i++) {
		if(N%i==0 && M%i==0) {
			MAX = i;
		}
	}
	MIN = N*M/MAX;

	cout << MAX << endl << MIN << endl;

	return 0;
}
