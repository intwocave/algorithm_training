#include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

int main(void) {
    point p[100000] = {};
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> p[i].x >> p[i].y;
    }

    return 0;
}