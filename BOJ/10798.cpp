#include <iostream>
#include <string>
// #include <sstream>
using namespace std;

int main(void) {
    // 배열 선언 및 초기화
    char arr[5][15];
    // for (int i=0; i < sizeof(arr)/sizeof(char); i++) **(arr+i) = ' ';
    for(int i=0; i<5; i++) for(int j=0; j<15; j++) arr[i][j] = ' ';

    /* string word;
    for(int i=0; i<5; i++) {
        string str;
        getline(cin, str);
        stringstream ss(str);
        int idx=0;
        while(getline(ss, word, ' ')) {
            arr[i][idx] = word.at(0);
            // cout << "arr[" << i << "][" << idx << "]에 " << word.at(0) << "할당됨" << 'n';
            idx++;
        }
        // cout << endl;
    } */

    for(int i=0; i<5; i++) {
        string str;
        cin >> str;
        for(int j=0; j<str.size(); j++)
            arr[i][j] = str[j];
    }

    for(int i=0; i<15; i++) {
        for(int j=0; j<5; j++) {
            if(arr[j][i] != ' ') cout << arr[j][i];
        }
    }

    return 0;
}