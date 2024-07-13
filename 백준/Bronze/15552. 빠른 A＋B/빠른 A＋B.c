#include <stdio.h>
int main() {
	long long t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}