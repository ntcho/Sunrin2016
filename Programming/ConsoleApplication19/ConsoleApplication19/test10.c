#include <stdio.h>

void recHanoi(int i, char from, char by, char to) {
	if (i == 1) {
		printf("Move disc 1, from %c to %c\n", from, to);
	}
	else {
		recHanoi(i - 1, from, by, to);
		printf("Move disc %d, from %c to %c\n", i, from, to);
		recHanoi(i - 1, by, from, to);
	}
}

void main() {
	int i;
	printf("Enter negative value to end.\n");
	while (1) {
		printf("Enter tower's height : ");
		scanf("%d", &i);

		if (i <= 0) {
			break;
		}

		recHanoi(i, 'A', 'B', 'C');
	}
}