#include <iostream>
using namespace std;

int main(void) {
	int arr[3];
	bool sw;

	cin >> arr[0] >> arr[1] >> arr[2];

	do {
		sw = false;
		for(int i = 0; i < 2; i++) {
			if(arr[i] > arr[i+1]) {
				sw = true;
				int tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
	} while(sw);

	cout << arr[1] << endl;

	return 0;
}
