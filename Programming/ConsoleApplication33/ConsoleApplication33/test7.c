#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char memo[200];
};

void main() {
	FILE *input = fopen("input7.txt", "r");
	FILE *output = fopen("output7.txt", "w");
	int personCount;
	int i;
	struct Person people[10];

	printf("Output (output7.txt)");
	fprintf(input, "%d", personCount);

	for (i = 0; i < personCount; i++) {
		fprintf(input, "%s %d\n", people[i].name, &people[i].age);
		fgets(people[i].memo, 200, input);
		fprintf(stdout, "Name : %s\n", people[i].name);
		fprintf(stdout, "Age : %d\n", people[i].age);
		fprintf(stdout, "Memo : %s\n", people[i].memo);
	}

	fclose(input);
	fclose(output);
}