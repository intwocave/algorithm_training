#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    string *str = new string[N];

    for(int i=0; i<N; i++) {
        cin >> str[i];
    }

    int n = N;
    bool sw;
    do {
        sw = false;
        for(int i=0; i<N-1; i++) {
            if(str[i].length() > str[i+1].length()) {
                string tmp = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp;
                sw = true;
            } else {
                if(!str[i].compare(str[i+1]) && str[i]!="") {
                    str[i] = "";
                    n--;
                }
            }
        }  
    } while(sw);
    string *newStr = new string[n];

    for(int i=0, j=0; i<N; i++) {
        if(str[i]=="") continue;
        else {
            newStr[j] = str[i];
            j++;
        }
    }

    do {
        sw = false;
        for(int i=0; i<n-1; i++) {
            if(newStr[i].length()==newStr[i+1].length()) {
                for(int j=0; j<newStr[i].length(); j++) {
                    if(newStr[i].at(j) > newStr[i+1].at(j)) {
                        /* cout << (int)newStr[i].at(j) << newStr[i].at(j) << " > " << (int)newStr[i+1].at(j) << newStr[i+1].at(j) << endl;
                        cout << newStr[i] << " > " << newStr[i+1] << endl;
                        for(int i=0; i<n; i++) {
                           cout << newStr[i] << endl;
                        } cout << endl; */
                        string tmp = newStr[i];
                        newStr[i] = newStr[i+1];
                        newStr[i+1] = tmp;
                        sw = true;
                        break;
                    } else if (newStr[i].at(j) < newStr[i+1].at(j)) {
                        break;
                    }
                }
            }
        }
    } while(sw);

    for(int i=0; i<n; i++) {
        cout << newStr[i] << endl;
    }

    delete[] str;
    return 0;
}