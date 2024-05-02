#include <iostream>
using namespace std;

int partition(int* arr, int begin, int end) {
    int pivot = (begin+end)/2; // (0+4)/2 = 2 -> 3
    int L = begin, R = end;
    // cout << "pivot: " << pivot << " Begin: " << begin << " End: " << end << endl;
    
    while(L<R) {
        while(arr[L] < arr[pivot] && L<R) L++;
        while(arr[R] >= arr[pivot] && L<R) R--;
        if(arr[L] > arr[R]) {
            int tmp = arr[L];
            arr[L] = arr[R];
            arr[R] = tmp;

            if(L == pivot) pivot = R;
        }
    }
    
    if(arr[pivot] != arr[L]) {
        int tmp = arr[pivot];
        arr[pivot] = arr[L];
        arr[L] = tmp; // equal to arr[R] = tmp;
    }

    return L;
}

void quickSort(int* arr, int begin, int end) {
    if (begin < end) {
        int p = partition(arr, begin, end);
        quickSort(arr, begin, p-1);
        quickSort(arr, p+1, end);
    }
}

int main(void) {
    int N;

    cin >> N;
    int arr[N] = {0,};

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, N-1);

    for(int i=0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}