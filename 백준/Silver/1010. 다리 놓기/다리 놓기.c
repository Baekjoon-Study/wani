#include <stdio.h>
int main() {
	int t, w, e;
	long long result;
	scanf("%d\n", &t);
	for (int j = 0; j < t; j++) {
		result = 1;
		scanf("%d %d", &w, &e);
		for (int i = 0; i < w; i++) {
			result *= e - i;
			result /= 1 + i;
		}
		printf("%lld\n", result);
	}
	return 0;
}