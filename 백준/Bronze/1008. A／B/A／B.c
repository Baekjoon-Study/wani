#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	double c = (double)a / (double)b;
	printf("%.9lf",c);
}