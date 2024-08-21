#include <stdio.h>
int main() {
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	if (t >= 60) {
		h += t / 60;
		m += t % 60;
	}
	else m += t;
	if (m >= 60) {
		m -= 60;
		h++;
	}
	if (h >= 24) h -= 24;
	printf("%d %d", h, m);
	return 0;
}