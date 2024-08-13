#include <stdio.h>
#include <string.h>

int main() {
	int t, n = 0, result = 0;
	char ox[81];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		result = 0;
		n = 0;
		scanf("%s", ox);
		for (int j = 0; j < strlen(ox); j++) {
			if (ox[j] == 'O') {
				result += 1 + n++;
			}
			else n = 0;
		}
		printf("%d\n", result);
	}
	return 0;
}