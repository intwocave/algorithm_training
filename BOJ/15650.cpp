#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int arr[n+1] = {};
    bool vs[n+1] = {};
    for(int i=1; i<=n; i++) arr[i] = i;

    for(int j=1; j<=m; j++) {
        for(int i=j, cnt; i<=n; i++) {
            cnt=0;
            if(vs[i]==false && cnt<m) {
                cout << arr[i] << " ";
                if(cnt == m-1) vs[i]=true;
                cnt++;
            }
        }
    }
    
    for(int i=0; i<n+1; i++) vs[i]=false;
    vs[j]=true;
    

    return 0;
}