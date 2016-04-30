#include <stdio.h>
#include <conio.h>
#define PASSWORD 1234

void LeapYear();

int main() {
	/*
	int const PASSWD = 1234;
	int pw;

	while (1) {
		printf("Enter Password : ");
		scanf("%d", &pw);

	if (pw > 999 && pw < 10000) {
		if (PASSWD == pw && PASSWORD == pw) {
			printf("\nAccess Granted.\n\n");

			break;
		}
		else {
			printf("\nAccess Denied.\n\n");
			continue;
		}
	}
	else printf("\nWrong Password.\n\n");
	}

	int month, day;

	day = 30;

	printf("Enter month : ");
	scanf("%d", &month);

	switch(month) {
		case 2:
			day = 28;
			break;
		case 1 :
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
	}

	printf("\nMonth %d have %d days.\n\n", month, day);

		int year;
		while (1) {
			printf("\nEnter year : ");
			scanf("%d", &year);
			LeapYear(year);
		}
	}
	void LeapYear(int year) {
		int i, j;
		int cnt = 0, day;
		int arr[6][7];
		for (i = 1; i<year; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
				cnt++;
			}
		}
		day = ((year * 365) + cnt) % 7;
		/*
		switch (day) {
		case 0:
			printf("\n%dSunday. \n");
			break;
		case 1:
			printf("\nMonday. \n");
			break;
		case 2:
			printf("\nTuesday. \n");
			break;
		case 3:
			printf("\nWednesday. \n");
			break;
		case 4:
			printf("\nThursday. \n");
			break;
		case 5:
			printf("\nFriday. \n");
			break;
		default:
			printf("Saturday. \n");
		}
		for (i = 0; i<6; i++) {    // ??? 1? 1?? ???? ??? 1, 2, 3 .... ??.
			for (j = 0; j<7; j++) {
				arr[i][j] = (i * 7 + j + 1) - day;
			}
		}

		printf("Su Mo Tu We Th Fr Sa \n");    // ??? ??? ???? ??
		for (i = 0; i<6; i++) {
			for (j = 0; j<7; j++) {
				if (arr[i][j]<1 || arr[i][j]>31) {    //?? 1 ??, 31 ?? ? ?? ??? ??.
					printf("   ");
					continue;
				}
				printf("%2d ", arr[i][j]);    //?? ???? 1??? ??? ??.
			}
			printf("\n");
		}

	}
	*/

int year, month, day;

printf("Enter year : ");
scanf("%d", &year);
if (year >= 2000 || year <= 2200) {
	printf("\nEnter month : ");
	scanf("%d", &month);
	if (month >= 12 || month <= 1) {
		printf("\nEnter month : ");
		scanf("%d", &month);
		return;
	}
}
else {
	printf("Enter year : ");
	scanf("%d", &year);
}

switch (month) {
case 2:
	if (year % 4 == 0 && year % 100 != 0) {
		day = 29;
	}
	else day = 28;
	break;
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	day = 31; break;

default: day = 30;
}
printf("\nYear %d month %d have %d days\n", year, month, day);
	getch();
	return 0;
}