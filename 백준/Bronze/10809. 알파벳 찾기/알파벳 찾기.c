#include <string.h>
int main() {
    char S[101];
    int positions[26];
    for (int i = 0; i < 26; i++) {
        positions[i] = -1;
    }
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++) {
        int index = S[i] - 'a';
        if (positions[index] == -1) {
            positions[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", positions[i]);
    }
}