#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    bool sw;
    do {
        sw =false;
        for(int i=0; i<N-1; i++) {
            if(arr[i] > arr[i+1]) {
                sw =true;
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    } while(sw);

    int sum =0, result = 0;
    for(int i = 0; i < N; i++) {
        sum += arr[i];
        result += sum;
    }

    cout << result << endl;
}