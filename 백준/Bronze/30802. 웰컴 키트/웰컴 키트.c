#include <stdio.h>
int main() {
	int n;
	int size[7];
	int t, p;
	int total = 0;

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < 6; i++) scanf("%d", &size[i]);
	scanf("%d %d", &t, &p);
	for (int j = 0; j < 6; j++) {
		if (size[j] % t == 0) total += size[j] / t;
		else total += size[j] / t + 1;
	}
	printf("%d\n", total);
	printf("%d %d\n", n / p, n % p);
	
	return 0;
}