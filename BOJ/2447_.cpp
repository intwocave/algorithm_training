#include <iostream>

using namespace std;

void star(int i, int j, int N) {
    if ((i/N)%3 == 1 && (j/N)%3 == 1) cout << ' ';
    else {
        if (N/3 == 0) cout << '*';
        else star(i, j, N/3);
    }
}

int main(void) {
    // N은 3의 거듭제곱
    int N; cin >> N;
    if ((N % 3) != 0) {
        cout << "N이 3의 거듭제곱이 아닙니다" << endl;
        return -1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            star(i, j, N);
        }
        cout << '\n';
    }

    return 0;
}