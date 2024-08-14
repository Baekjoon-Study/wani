#include <stdio.h>

int main() {
	int a, b, x;
	scanf("%d %d", &a, &b);
	if (a > b) {
		for (int i = 1; i < b + 1; i++) {
			if (a % i == 0 && b % i == 0) x = i;
		}
	}
	else {
		for (int j = 1; j < a + 1; j++) {
			if (a % j == 0 && b % j == 0) x = j;
		}
	}
	printf("%d\n", x);
	printf("%d\n", a * b / x);
	return 0;
}