#include <stdio.h>

int main() {
	int a[] = {33, 67, 23, 87, 95, 47, 75 };
	int i, max, min, max_index, min_index;

	max = min = a[0];

	for (i = 0; i < sizeof(a)/sizeof(int); i++) {
		if (max < a[i]) {
			max = a[i];
			max_index = i;
		}
		if (min > a[i]) {
			min = a[i];
			min_index = i;
		}
	}
	printf("Max : %d, Min : %d\n", max, min);

	getch();
}