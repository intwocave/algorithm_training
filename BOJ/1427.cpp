#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;

    bool sw;
    do
    {
        sw = false;
        for(int i=0; i<str.length(); i++) {
            if(str[i]<str[i+1]) {
                char tmp = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp;
                sw = true;
            }
        }
    } while (sw);

    cout << str << endl;
        
    return 0;
}