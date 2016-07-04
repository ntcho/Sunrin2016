#include <stdio.h>

void rec_print_n(int maxRange);

void main() {
	rec_print_n(3);
}

void rec_print_n(int maxRange) {
	if (maxRange > 0) {
		rec_print_n(maxRange - 1);
		printf("%d", maxRange);
	}
}