#include <stdio.h>

int main() {
	int x[8];
	int result = 0;
	for(int j = 0;j<8;j++) scanf("%d", &x[j]);
	for (int i = 0; i < 7; i++) {
		if (result == 1 && x[i] > x[i + 1]) {
			result = 3;
			break;
		}
		else if (result == 2 && x[i] < x[i + 1]) {
			result = 3;
			break;
		}
		else if (x[i] < x[i + 1]) result = 1;
		else if (x[i] > x[i + 1]) result = 2;
		
	}
	if (result == 1) printf("ascending");
	else if (result == 2) printf("descending");
	else if (result == 3) printf("mixed");
	return 0;
}