#include <string.h>
#include <stdio.h>
int main() {
	char s[16];
	int sec = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 65 && s[i] <= 67) sec += 3;
		else if (s[i] >= 68 && s[i] <= 70) sec += 4;
		else if (s[i] >= 71 && s[i] <= 73) sec += 5;
		else if (s[i] >= 74 && s[i] <= 76) sec += 6;
		else if (s[i] >= 77 && s[i] <= 79) sec += 7;
		else if (s[i] >= 80 && s[i] <= 83) sec += 8;
		else if (s[i] >= 84 && s[i] <= 86) sec += 9;
		else if (s[i] >= 87 && s[i] <= 90) sec += 10;

	}
	printf("%d", sec);
}