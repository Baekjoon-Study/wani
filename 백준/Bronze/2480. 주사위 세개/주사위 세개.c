#include <stdio.h>
int main() {
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || b == c || a == c) {
		if (a == b || a == c) {
			printf("%d", 1000 + 100 * a);
		}
		else {
			printf("%d", 1000 + 100 * b);
		}
	}
	else {
		max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		printf("%d", max * 100);
	}
}