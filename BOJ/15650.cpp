#include <iostream>
using namespace std;

int n, m;
int arr[10], vis[10];

void dfs(int num, int cnt) {
	if(cnt==m) {
		for(int i=0; i<m; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
		return;
	}
	for(int i=num; i<=n; i++) {
		if(!vis[i]) {
			vis[i] = 1;
			arr[cnt] = i;
			dfs(i+1, cnt+1);
			vis[i] = 0;
		}
	}
}

int main(void) {
	cin >> n >> m;

	dfs(1, 0);

	return 0;
}
