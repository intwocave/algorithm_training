#include <iostream>
#include <cmath>

using namespace std;

struct Position {
	int x, y;
};

int main(void) {
	Position myPos, rectPos;
	int MIN, arr[4] = {0,};

	cin >> myPos.x >> myPos.y >> rectPos.x >> rectPos.y;

	arr[0] = sqrt(pow(rectPos.y - myPos.y, 2));
	arr[1] = sqrt(pow(rectPos.x - myPos.x, 2));
	arr[2] = myPos.y;
	arr[3] = myPos.x;

	MIN = arr[0];
	for(int i=1; i<4; i++) {
		if(arr[i] < MIN) {
			MIN = arr[i];
		}
	}

	cout << MIN << endl;

	return 0;
}
