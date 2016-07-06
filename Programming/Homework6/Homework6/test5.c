#include <stdio.h>

void main() {
	int i, j, count = 1;
	int arr[5][5];
	int rowsum = 0, colsum = 0, totalsum = 0;

	for (i = 0; i < 5; i++) {
		rowsum = 0;
		for (j = 0; j < 4; j++) {
			arr[i][j] = count;
			printf("%5d", count);
			rowsum = rowsum + count;
			count++;
		}
		printf("%5d\n", rowsum);
	}
	
	for (i = 0; i < 4; i++) {
		colsum = 0;
		for (j = 0; j < 4; j++) {
			colsum = colsum + arr[j][i];
		}
		printf("%5d", colsum);
		totalsum = totalsum + colsum;
	}

	printf("%5d\n\n", totalsum);
}