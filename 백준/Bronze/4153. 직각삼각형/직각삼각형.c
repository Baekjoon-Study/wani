#include <stdio.h>

int main() {
	int a, b, c, t;

	do {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		if (a >= b && a >= c) {
			if (a * a == b * b + c * c) printf("right\n");
			else printf("wrong\n");
		}
		else if (b >= c && b >= a) {
			if (b * b == a * a + c * c) printf("right\n");
			else printf("wrong\n");
		}
		else if (c >= b && c >= a) {
			if (c * c == b * b + a * a) printf("right\n");
			else printf("wrong\n");
		}
	} while (a != 0 && b != 0 && c != 0);
	return 0;
}