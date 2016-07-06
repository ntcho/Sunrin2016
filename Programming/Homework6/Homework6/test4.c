#include <stdio.h>

void printArr(int arr[5][5]) {
	int i, j;
	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[i][j] == 0) {
				printf("    ");
			}
			else {
				printf("%3d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
}

void scheme1() {
	printf("\nScheme 1\n");

	int arr[5][5];
	int i, j;
	int count = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j < i) {
				arr[j][i] = 0;
			}
			else {
				arr[j][i] = count;
				count++;
			}
		}
	}

	printArr(arr);
}

void scheme2() {
	printf("\nScheme 2\n");

	int arr[5][5];
	int i, j;
	int count = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i % 2 == 0) {
				arr[i][j] = count;
				count++;
			}
			else {
				arr[i][4 - j] = count;
				count++;
			}
		}
	}

	printArr(arr);
}

void scheme3() {
	printf("\nScheme 3\n");

	int arr[5][5];
	int i, j;
	int count = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j >= 5 - i) {
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = count;
				count++;
			}
		}
	}

	printArr(arr);
}

int main() {
	int select;

	do{
		printf("Enter scheme number to continue (enter 0 to finish) : ");
		scanf("%d", &select);

		switch (select) {
		case 0: return 0; break;
		case 1: scheme1(); break;
		case 2: scheme2(); break;
		case 3: scheme3(); break;
		default: printf("Wrong integer, enter again\n");
		}

	} while (1);
}