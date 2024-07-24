#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n, B, i = 0;
    char ans[101];
    scanf("%d %d", &n, &B);
    while (n > 0) {
        int cal = n % B;
        if (cal >= 10) {
            ans[i] = cal + 55;
        } 
        else {
            ans[i] = cal + '0';
        }
        i++;
        n /= B;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", ans[j]);
    } 
}