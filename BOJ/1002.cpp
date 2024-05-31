#include <iostream>
#include <cmath>
#define ll unsigned long long
using namespace std;

struct pos {
    int x;
    int y;
    int r;
};

int main(void) {
    int t; cin >> t;
    pos myPos[t][2] = {};

    for(int i=0; i<t; i++) {
        cin >> myPos[i][0].x >> myPos[i][0].y >> myPos[i][0].r;
        cin >> myPos[i][1].x >> myPos[i][1].y >> myPos[i][1].r;
        ll dist = 
            pow((myPos[i][1].x - myPos[i][0].x), 2)
            + pow((myPos[i][1].y - myPos[i][0].y), 2);
        // cout << "dist: " << dist << '\n';
        int rad1 = pow((myPos[i][0].r + myPos[i][1].r), 2);
        int rad2 = pow((myPos[i][0].r - myPos[i][1].r), 2);
        
        if(dist == 0) {
            if(myPos[i][0].r == myPos[i][1].r) {
                cout << -1 << '\n';
            } else cout << 0 << '\n';
        } else if(dist == rad1 || dist == rad2) {
            cout << 1 << '\n';
        } else if(dist > rad2 && dist < rad1) {
            cout << 2 << '\n';
        } else {
            cout << 0 << '\n';
        } 
    }

    return 0;
}