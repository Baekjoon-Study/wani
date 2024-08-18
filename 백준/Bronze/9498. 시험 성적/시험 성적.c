#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (90 <= x)printf("A\n");
	else if (80 <= x && x < 90)printf("B\n");
	else if (70 <= x && x < 80)printf("C\n");
	else if (60 <= x && x < 70)printf("D\n");
	else printf("F\n");
	return 0;
}