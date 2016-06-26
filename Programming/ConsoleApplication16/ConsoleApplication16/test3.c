#include <stdio.h>

void starTriangle(int no);

int main() {
	int no;

	printf("Enter repeat number : ");
	scanf("%d", &no);

	starTriangle(no);

	printf("\n");

	return 0;
}

void starTriangle(int no) {
	int i, j;

	printf("\n");

	for (i = 0; i < no; i++) {
		for (j = 0; j <= i; j++) {
			printf("#");
		}
		printf("\n");
	}
}