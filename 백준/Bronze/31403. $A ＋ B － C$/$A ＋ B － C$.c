#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ASC 48
int main() {
	char a[5], b[5], c[5];
	int sum_int, sum_str;
	scanf("%s\n%s\n%s", a, b, c);
	sum_int = atoi(a) + atoi(b) - atoi(c);
	sum_str = atoi(strcat(a, b)) - atoi(c);
	printf("%d\n", sum_int);
	printf("%d",sum_str);

	return 0;
}