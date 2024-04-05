#include <iostream>
using namespace std;

int main(void) {
	int n, m; // 1 <= n <= 1024, 1 <= m <= 100000

	cin >> n >> m;

	// 배열 동적할당
	int** arr = new int* [n + 1];
	for (int i = 0; i < n + 1; i++) {
		arr[i] = new int[n + 1] {};
	}

	// 배열 입력 및 누적합
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < n + 1; j++) {
			cin >> arr[i][j];
			arr[i][j] = arr[i][j] + (arr[i - 1][j] + arr[i][j - 1]) - arr[i - 1][j - 1];
		}

	// dynamic allocated arrays initializing easy syntax
	/*
	* easier syntax:
	* int* sum { new int[m] {0, } };
	* or
	* int* sum { new int[m] {} };
	*/

	// 배열 전체 출력
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}*/

	int* sum = new int[m] {0, };
	int x1, y1, x2, y2;

	for (int i = 0; i < m; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		sum[i] = arr[x2][y2] - (arr[x2][y1 - 1] + arr[x1 - 1][y2]) + arr[x1 - 1][y1 - 1];
	}

	for (int i = 0; i < m; i++) {
		cout << sum[i];
		if (m - i != 1)
			// cout << endl; // endl 대신 \n 쓰니까 시간초과/틀렸습니다 안 뜸!!! 머지;;
			cout << '\n';
	}

	return 0;
}