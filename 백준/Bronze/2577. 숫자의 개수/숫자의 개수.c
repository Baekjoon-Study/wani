#include <stdio.h>
int main() {
	int a, b, c, n, m, x[11] = {0};
	scanf("%d\n%d\n%d", &a, &b, &c);
	n = a * b * c;
	while (n > 0) {
		m = n % 10;
		n = n / 10;
		if (m == 0) x[0] += 1;
		else if (m == 1) x[1] += 1;
		else if (m == 2) x[2] += 1;
		else if (m == 3) x[3] += 1;
		else if (m == 4) x[4] += 1;
		else if (m == 5) x[5] += 1;
		else if (m == 6) x[6] += 1;
		else if (m == 7) x[7] += 1;
		else if (m == 8) x[8] += 1;
		else if (m == 9) x[9] += 1;
	}
	for (int i = 0; i < 10; i++) printf("%d\n", x[i]);
	return 0;
}