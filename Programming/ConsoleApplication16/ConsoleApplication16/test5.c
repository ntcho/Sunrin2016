#include <stdio.h>

void rect(int no);

int main() {
	int n;

	printf("Enter number : ");
	scanf("%d", &n);

	printf("\n");

	rect(n);

	return 0;
}

void rect(int n) {
	int i, j;
	int num;

	num = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			++num;
			if (n <= 4) {
				printf("%3d", num);
			}
			else if (n >= 5 && n <= 9) {
				printf("%4d", num);
			}
			else {
				printf("%5d", num);
			}
		}
		printf("\n");
	}

	printf("\n");
}