#include <stdio.h>
#include <conio.h>

int main() {
	int a[5][5];
	int i, j, count, rowsum, colsum, totalsum;

	totalsum = 0;

	do {
		printf("Enter first value : ");
		scanf("%d", &count);
		if (count >= 6) {
			printf("Invalid value. The table will out of control with this number.\n");
		}
		else break;
	} while (count >= 6);

	//count = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[j][i] = count++;
		}
	}

	printf("+----+----+----+----+----++----+\n");

	for (i = 0; i < 5; i++) {
		rowsum = 0;
		colsum = 0;
		printf("|");
		for (j = 0; j < 5; j++) {
			printf("%3d |", a[i][j]);
			rowsum += a[i][j];
			colsum += a[j][i];
		}
		printf("| %d |", rowsum);
		totalsum += rowsum;
		printf("\n+----+----+----+----+----++----|\n");
	}

	printf("+----+----+----+----+----++----+\n");

	printf("|");
	for (i = 0; i < 5; i++) {
		colsum = 0;
		for (j = 0; j < 5; j++) {
			colsum += a[j][i];
		}
		printf("%3d |", colsum);
		totalsum += colsum;
	}

	printf("|%d |\n", totalsum);

	getch();
	return 0;
}