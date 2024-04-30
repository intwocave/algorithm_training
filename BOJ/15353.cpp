#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string a, b;
    cin >> a >> b;
    int a_size = a.size();
    int b_size = b.size();

    string result;
    bool over = false;
    for(int i=1;; i++) {
        int a_tmp = (a_size-i < 0) ? 48 : a.at(a_size-i);
        int b_tmp = (b_size-i < 0) ? 48 : b.at(b_size-i);
        int sum = a_tmp-48 + b_tmp-48;
        if (over) sum += 1;

        if (sum >= 10) over = true;
        else over = false;

        result.insert(0, 1, sum%10+48);
        if(a_size-i < 0 && b_size-i < 0) break;
    }

    while(true) {
        if(result.at(0) == '0') result.erase(0, 1);
        else break;
    }

    cout << result << endl;

    return 0;
}