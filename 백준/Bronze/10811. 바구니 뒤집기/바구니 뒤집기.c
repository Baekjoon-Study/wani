#include <stdio.h>
void reverse(int arr[], int start, int end);
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int baskets[N];
    for (int i = 0; i < N; i++) {
            baskets[i] = i + 1;
    }
    for (int k = 0; k < M; k++) {
            int i, j;
            scanf("%d %d", &i, &j);
            reverse(baskets, i - 1, j - 1);
    }
    for (int i = 0; i < N; i++) {
            printf("%d ", baskets[i]);
    }
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}