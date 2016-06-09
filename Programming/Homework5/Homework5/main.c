#include <stdio.h>
#include <conio.h>

void main() {
	int student_count = 0;
	int student_status[30][1];
	int i, j;
	char status[6];
	char attend[6] = "Attend";
	char absent[6] = "Absent";

	printf("\n        [ Welcome to roll book! ]\n\n");

	printf(" Please enter number of students (1~30) : ");
	do {
		scanf("%d", &student_count);

		if (student_count <= 0 || student_count > 30) {
			printf(" Invalid value of student number. Enter again to retry.\n\n");
			printf(" Please enter number of students (1~30) : ");
			continue;
		}
		else break;
	} while (student_count <= 0 || student_count > 30);

	for (i = 0; i < student_count; i++) {
		student_status[i][0] = i;
		student_status[i][1] = 0;
	}

	/*
		status 0 : null (error)
		status 1 : attended
		status 2 : absent
	*/

	printf("\n Checking students.\n Press 1 to mark as attend, Press 2 to mark as absent.\n\n");

	for (i = 0; i < student_count; i++) {
		printf(" Enter student %d's status : ", i + 1);
		do {
			scanf("%d", &j);

			if (j == 1 || j == 2) {
				student_status[i][1] = j;
				break;
			}
			else {
				printf(" Invalid value of student status. Enter again to retry.\n\n");
				printf(" Enter student %d's status : ", i + 1);
				continue;
			}
		} while (j != 1 || j != 2);
	}

	printf("\n -----------------------\n");
	printf(" : Student No : Status :\n");

	for (i = 0; i < student_count; i++) {
		/*
		if (student_status[i][1] == 1) {
			printf(":     %2d     : %s :\n", ++i, "attend");
		}
		else if (student_status[i][1] == 2) {
			printf(":     %2d     : %s :\n", ++i, "absent");
		}
		else {
			printf(":     %2d     : %s :\n", ++i, "error");
		}
		*/

		printf(" :------------:--------:\n");
		switch (student_status[i][1]) {
		case 1 : printf(" :     %2d     : %s :\n", i + 1, "attend"); break;
		case 2 : printf(" :     %2d     : %s : ::\n", i + 1, "ABSENT"); break;
		default : printf(" :     %2d     : %s  : ?\n", i + 1, "error"); break;
		}
	}
	printf(" -----------------------\n");

	printf("\n Finished checking students. Press any key to continue.\n");
	getch();
	printf(" ");
}