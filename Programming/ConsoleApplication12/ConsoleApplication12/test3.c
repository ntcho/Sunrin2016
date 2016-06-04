#include <stdio.h>
#include <conio.h>

int main() {
	int a[5][5];
	int i, j, count;

	count = 1;
	for (i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 5; j++) {
				a[i][j] = count;
				++count;
			}
		}
		else {
			for (j = 4; j >= 0; j--) {
				a[i][j] = count;
				++count;
			}
		}
		for (j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}