#include <stdio.h>

//1
int main() {
	int l, n, i, count=0;
	scanf("%d", &l);
	int num[l];
	for (i = 0; i < l; i++) {
		scanf("%d", &n);
		num[i] = n;
	}
	int key;
	scanf("%d", &key);
	for (i = 0; i < l; i++) {
		if (num[i] == key)
			count++;
	}
	printf("%d", count);
}