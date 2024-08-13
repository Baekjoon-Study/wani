#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int t, h, w, n;
	int x, y;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		if (n % h == 0) x = n / h;
		else x = n / h + 1;
		if (n % h == 0) y = h;
		else y = n % h;
		printf("%d", y);
		if (x < 10) printf("0");
		printf("%d\n", x);
	}
}