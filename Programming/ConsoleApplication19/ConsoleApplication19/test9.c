#include <stdio.h>

recRabbit(int month) {
	if (month == 1 || month == 2) {
		return 1;
	}
	else {
		return recRabbit(month - 1) + recRabbit(month - 2);
	}
}

void main() {
	int month;
	printf("Month : ");
	scanf("%d", &month);
	printf("Rabbit count on month %d is %d\n", month, recRabbit(month));
}