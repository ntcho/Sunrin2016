#include <stdio.h>

struct account {
	char accountNum[20];
	char name[20];
	int deposit;
	int withdraw;

	int balance;
};

typedef struct account acc;

void main() {
	FILE *fp = fopen("bank.dat", "r");
	FILE *op = fopen("result.dat", "w");
	acc list[100];
	int i;

	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s %s %d %d", list[i].accountNum, list[i].name, &list[i].deposit, &list[i].withdraw);
		list[i].balance = list[i].deposit - list[i].withdraw;
		fprintf(op, "%s %s %d\n", list[i].accountNum, list[i].name, list[i].balance);
	}

	fclose(fp);
	fclose(op);
}