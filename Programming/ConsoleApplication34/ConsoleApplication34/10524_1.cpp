#include <stdio.h>

struct SUNGJUK {
	int no;
	char name[20];
	int pilgi;
	int silgi;
	int tot;
	float ave;
};

float calcAvg(SUNGJUK score) {
	return ((float)score.pilgi + (float)score.silgi) / 2;
}

int calcTotal(SUNGJUK score) {
	return score.pilgi + score.silgi;
}

void printScore(SUNGJUK score) {
	printf("\n");
	printf("%d\n", score.no);
	printf("%s\n", score.name);
	printf("%d\n", score.pilgi);
	printf("%d\n", score.silgi);
	printf("%d\n", score.tot);
	printf("%.2f\n", score.ave);
}

void main() {
	SUNGJUK student = {
		0, "", 0, 0, 0, 0.0
	};

	printf("Enter number : ");
	scanf("%d", &student.no);
	printf("Enter name : ");
	scanf("%s", &student.name);
	printf("Pilgi score : ");
	scanf("%d", &student.pilgi);
	printf("Silgi score : ");
	scanf("%d", &student.silgi);
	student.ave = calcAvg(student);
	student.tot = calcTotal(student);

	printScore(student);
}