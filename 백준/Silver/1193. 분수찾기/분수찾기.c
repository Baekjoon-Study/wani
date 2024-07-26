#include <stdio.h>

int main() {
	int n, k = 1, a;
	scanf("%d", &n);
	while(1){		
		if ((k-1)*(k)/2 < n && n <= (k)*(k+1)/2){
			break;
		}
		k++;
	}
	if (k % 2 != 0){
		a = k * (k + 1) / 2;
		printf("%d/%d", a - n + 1, k - (a - n));
	}
	else{
		a = k * (k + 1) / 2;
		printf("%d/%d", k - (a - n), a - n + 1);
	}
}