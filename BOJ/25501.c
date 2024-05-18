#include <stdio.h>
#include <string.h>

int cnt;

int recursion(char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(void){
    int n;
    scanf("%d", &n);
    char str[n][1001];
    for(int i=0; i<n; i++) {
        scanf("%s", str[i]);
    }
    for(int i=0; i<n; i++) {
        cnt = 0;
        int ans = isPalindrome(str[i]);
        printf("%d %d\n", ans, cnt);
    }

    return 0;
}
