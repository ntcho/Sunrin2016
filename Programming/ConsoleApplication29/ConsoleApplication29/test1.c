#include <stdio.h>

struct Date {
	int year;
	int month;
	int day;
};

void printDate(struct Date *date) {
	printf("Year  %4d\n", date->year);
	printf("Month %4d\n", date->month);
	printf("Day   %4d\n\n", date->day);
}

void main() {
	int i;
	struct Date date[3] = { { 1998, 1, 5 }, {2000, 8, 12 }, {1999, 11, 3} };
	struct Date *date_pt;
	date_pt = date;
	for (i = 0; i < 3; i++) {
		printDate(date_pt);
		date_pt++;
	}
}