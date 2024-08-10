#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char vps[51];
	scanf("%d", &n);
	//getchar();
	for (int i = 0; i < n; i++) {
		int open = 0, close = 0;
		scanf("%s", vps);
		for (int j = 0; j < strlen(vps); j++) {
			if (vps[j] == '(') open++;
			else if (vps[j] == ')') close++;
			if (open < close) break;
		}
		if (close == open) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}