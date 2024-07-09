#include <stdio.h>
int main() {
	int h, m, t;
	scanf("%d %d\n%d", &h, &m, &t);
	if (t / 60 > 0) {
		h += t / 60;
		if (m + t % 60 > 59) {
			h++;
			m = m + t % 60 - 60;
		}
		else {
			m += t % 60;
		}
	}
	else {
		if (m + t % 60 > 59) {
			h++;
			m = m + t % 60 - 60;
		}
		else {
			m += t % 60;
		}
	}
	if (h >= 24) {
		h -= 24;
	}
	printf("%d %d", h, m);
}