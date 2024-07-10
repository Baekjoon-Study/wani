#include <stdio.h>
int main() {
	int level;
	scanf("%d", &level);
	for (int i=1; i <= level; i++) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}