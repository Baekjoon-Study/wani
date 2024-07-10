#include <stdio.h>
int main() {
	long long x, a, sum = 0;
	int n, b;
	scanf("%lld\n%d", &x, &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %d", &a, &b);
		sum += a * b;
	}
	if (sum == x) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}