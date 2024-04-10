#include <iostream>
using namespace std;


class stkNode {
public:
    int body;
    stkNode* link;

    stkNode() {
        body = 0;
        link = NULL;
    }

    stkNode(int x) {
        body = x;
        link = NULL;
    }
};

class stk {
private:
    stkNode* Nbase;

public:
    stk() {
        Nbase = NULL;
    }

    void push(int x);
    void pop(void);
    void size(void);
    void empty(void);
    void top(void);
};

void stk::push(int x) {
    stkNode* sn = new stkNode(x);
    if (!Nbase) {
        Nbase = sn;
    } else {
        stkNode* sn2 = Nbase;
        while(sn2->link) {
            sn2 = sn2->link;
        }
        sn2->link = sn;
    }
}

void stk::pop(void) {
    stkNode* sn1 = Nbase;
    stkNode* sn2;
    if (!sn1) {
        cout << -1 << endl;
    } else {
        while(sn1->link) {
            sn2 = sn1;
            sn1 = sn1->link;
        }
        cout << sn1->body << endl;
        if(sn1 == Nbase) {
            Nbase = NULL;
        }
        delete sn1;
        sn2->link = NULL;
    }
}

void stk::size(void) {
    int cnt = 1;
    if (Nbase == NULL) {
        cout << 0 << endl;
    } else {
        stkNode* sn = Nbase;
        while(sn->link != NULL) {
            sn = sn->link;
            cnt++;
        }
        cout << cnt << endl;
    }
}

void stk::empty(void) {
    if(!Nbase) cout << 1 << endl;
    else cout << 0 << endl;
}

void stk::top(void) {
    if(!Nbase) cout << -1 << endl;
    else {
        stkNode* sn = Nbase;
        while(sn->link) {
            sn = sn->link;
        }
        cout << sn->body << endl;
    }
}


int main(void) {
    int N;
    cin >> N;
    string str;
    int n;

    stk *myStk = new stk();

    for (int i = 0; i < N; i++) {
        cin >> str;
        if(str == "push") {
            cin >> n;
            myStk->push(n);
        }
        if(str == "pop") {
            myStk->pop();
        }
        if(str == "size") {
            myStk->size();
        }
        if(str == "empty") {
            myStk->empty();
        }
        if(str == "top") {
            myStk->top();
        }
    }

    return 0;
}