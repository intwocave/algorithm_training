#include <iostream>
#define SIZE 10
using namespace std;

int partition(int* arr, int begin, int end) {
    int pivot = (begin+end)/2; // (0+9)/2 = 4.5 -> 4
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
    int tmp = arr[pivot];
    arr[pivot] = arr[L];
    arr[L] = tmp; // equal to arr[R] = tmp;

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
    int arr[SIZE] = {1, 3, 4, 2, 5, 7, 6, 9, 10, 8};
    cout << "size of arr: " << sizeof(arr)/4 << endl;

    cout << "Before: ";
    for(int i=0; i<SIZE; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    quickSort(arr, 0, SIZE-1);

    cout << "After: ";
    for(int i=0; i<SIZE; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}