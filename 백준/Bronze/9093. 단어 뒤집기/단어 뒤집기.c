#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int top = 0;
	char arr[1001];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		fgets(arr, 1001, stdin);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == ' ' || arr[j] == '\n') {
				for (int k = j - 1; k >= top; k--) {
					printf("%c", arr[k]);
				}
				top = j + 1;
				printf(" ");
			}
		}
		printf("\n");
		top = 0;
	}
	return 0;
}