#include <stdio.h>
int main() {
	int h, m;
	scanf("%d\n%d", &h, &m);
	if (m < 45) {
		if (h == 0) {
			printf("%d %d", 23, 60 + m - 45);
		}
		else {
			printf("%d %d", h - 1, 60 + m - 45);
		}
	}
	else {
		printf("%d %d", h, m - 45);
	}
}