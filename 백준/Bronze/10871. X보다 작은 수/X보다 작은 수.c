#include <stdio.h>
int main() {
    int i, c, n, inArr[10000];
    scanf("%d %d", &c, &n);

    for (i = 0; i < c; i++) {
        scanf("%d", &inArr[i]);
        if (inArr[i] < n)
            printf("%d ", inArr[i]);
    }
}