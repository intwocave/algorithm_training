#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b, c; cin >> a >> b >> c;
	string str = to_string(a);
	str += to_string(b);
	int res = stoi(str) - c;
	cout << a+b-c << endl << res << endl;	

	return 0;
}
