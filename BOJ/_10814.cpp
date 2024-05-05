#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    int tosi[N]={};
    string name[N]={};

    for(int i=0; i<N; i++) {
        cin >> tosi[i] >> name[i];
    }

    bool sw;
    int tmp;
    string str;
    do
    {
        sw = false;
        for(int i=0; i<N-1; i++) {
            if(tosi[i] > tosi[i+1]) {
                tmp = tosi[i];
                tosi[i] = tosi[i+1];
                tosi[i+1] = tmp;

                str = name[i];
                name[i] = name[i+1];
                name[i+1] = str;

                sw = true;
            }
        }
    } while (sw);
    
    for (int i=0; i<N; i++) {
        cout << tosi[i] << " " << name[i] << endl;
    }

    return 0;
}