#include <stdio.h>
#include <string.h>
int main() {
	char s[1000000];
	int blank = 0;
	scanf("%[^\n]", s);
	if (strlen(s) == 1 && s[0] == ' ') {
		printf("%d", blank);

		return 0;
	}
	for (int i = 1; i < strlen(s)-1; i++) {
		if (s[i] == ' ') {
			blank++;
		}
	}
	printf("%d", blank+1);
}