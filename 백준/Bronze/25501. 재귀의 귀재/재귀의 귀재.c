#include <stdio.h>
#include <string.h>

void recursion(const char *s, int l, int r, int n){
    if(l >= r) printf("1 %d\n",++n);
    else if(s[l] != s[r]) printf("0 %d\n",++n);
    else return recursion(s, l+1, r-1, ++n);
}

void isPalindrome(const char *s, int n){
    return recursion(s, 0, strlen(s)-1, n);
}

int main(){
    int t, i, count;
    char s[1000];
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++){
        scanf("%s",s);
        count = 0;
        getchar();
        isPalindrome(s,count);
    }
}