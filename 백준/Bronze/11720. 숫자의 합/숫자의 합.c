#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", s);
	for (int j = 0; j < n; j++) {
		sum += s[j] - '0';
	}
	printf("%d", sum);
}