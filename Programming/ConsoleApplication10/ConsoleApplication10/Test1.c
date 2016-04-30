#include <stdio.h>
#include <conio.h>

int main() {
	char start, end, ph;
	int i, j;

	do {
		printf("Starting Alphabet : ");
		scanf(" %c", &start);
		printf("Ending Alphabet : ");
		scanf(" %c", &end);
		if (((int)start >= 'a' && (int)start <= 'z') && ((int)end >= 'a' && (int)end <= 'z') || ((int)start >= 'A' && (int)start <= 'Z') && ((int)end >= 'A' && (int)end <= 'Z')) {
			break;
		}
		else printf("\nEnter a corresponding alphabet.\n\n");
	} while (1 == 1);

	if ((int)start > (int)end) {
		ph = start;
		start = end;
		end = ph;
	}

	i = (int)start;
	j = (int)end;

	printf("\n");

	for (i; i <= j; i++) {
		printf("%c ", i);
	}
	printf("\n");

	getch();
	return 0;
}