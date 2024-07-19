#include <string.h>
#include <stdio.h>
int main() {
	char n1[4], n2[4], temp1, temp2;
	scanf("%s %s", n1, n2);
	temp1 = n1[0];
	n1[0] = n1[2];
	n1[2] = temp1;
	temp2 = n2[0];
	n2[0] = n2[2];
	n2[2] = temp2;
	if (strcmp(n1, n2) > 0) {
		printf("%s", n1);
	}
	else {
		printf("%s", n2);
	}
}