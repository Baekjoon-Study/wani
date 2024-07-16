#include <stdio.h>
#include <string.h>
int main() {
	int t;
	char s[1000];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		printf("%c%c \n", s[0], s[strlen(s) - 1]);
	}
}