#include <stdio.h>

struct Score {
	int no;
	char name[20];
	int ko;
	int en;
	int ma;
	int tot;
};

void main() {
	FILE *score;
	char str[216];
	char ch;
	struct Score list[10];
	int i = 0;
	int n;

	score = fopen("score.dat", "r");
	if (score == NULL) {
		printf("Error occured while reading the file\n");
	}
	while (fscanf(score, "%d %s %d %d %d",
		&list[i].no, &list[i].name, &list[i].ko, &list[i].en, &list[i].ma) != EOF) {
		list[i].tot = list[i].ko + list[i].en + list[i].ma;
		i++;
	}
	printf("No Name Ko En Ma Tot\n\n");
	for (n = 0; n < i; n++) {
		fprintf(stdout, "%d %s %d %d %d %d",
			list[n].no, list[n].name, list[n].ko, list[n].en, list[n].ma, list[n].tot);
		printf("\n");
	}
	printf("\n\n");

	fclose(score);
}