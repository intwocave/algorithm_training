#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    int size, top;
    int* arr;

public:
    Stack() { size = 0; top = 0; arr = new int[100001] {0, }; }

    bool Push() {
        if(size > 100000) return false;

        arr[++size] = ++top;
        return true;
    }

    int Pop() { if(size < 1) return -1; return arr[size--]; }

    int Top() { return arr[size]; }
};

int main(void) {
    vector<char> v;
    int n;
    bool nosw = false;
    cin >> n;
    int arr[n] = {};
    Stack myStack;

    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n; i++) {
        while(myStack.Top() < arr[i]) {
            myStack.Push();
            v.push_back('+');
            // cout << "arr[" << i << "]: " << arr[i] << "\nTOP: " << myStack.Top() << endl;
        }

        if(myStack.Top() > arr[i]) nosw = true; // cout << "NO" << endl;
        else {
            myStack.Pop();
            v.push_back('-');
        }
    }

    if(nosw) {
        cout << "NO" << endl;
        return 0;
    }

    for(auto a : v) {
        cout << a << '\n';
    }

    return 0;
}