#include <iostream>

using namespace std;

int main(void) {
	int M, N, sum=0, MIN=0;
	bool sw=false;

	cin >> M >> N;

	for(;M<=N;M++) {
		sw=false;
		if(M==1) sw=true;
		else {
			for(int i=2; i<M; i++) {
				if(M%i==0){
					sw=true;
				}
			}
		}
		if(!sw) sum += M;
		if(!MIN && !sw) MIN = M;
	}

	if(!MIN) cout << -1 << endl;
	else cout << sum << endl << MIN << endl;

	return 0;
}
