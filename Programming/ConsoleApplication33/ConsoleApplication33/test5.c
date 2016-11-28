#include <stdio.h>
#include <string.h>

struct Score {
	char name[10];
	int score;
	int rank;
};

struct Score score[100];

void sortScore(int count) {
	struct Score temp;
	int i, j;
	for (i = 0; i < count - 1; i++) {
		for (j = 0; j < count; j++) {
			if (score[j].score < score[j + 1].score) {
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}
}


void rankScore(int i) {
	//if (score[i].score == score[i + 1].score) {
	//	// same score, same rank
	//	rankScore(i);
	//}
	//else {
	//	score[i].rank = i;
	//}
	score[i].rank = i + 1;
}

void main() {
	FILE *input = fopen("input5.txt", "r");
	FILE *output = fopen("output5.txt", "w");

	int i, j;

	printf("Input (input5.txt) : \n");
	for (i = 0; fscanf(input, "%s %d\n", &score[i].name, &score[i].score) != EOF; i++) {
		// print the datas
		fprintf(stdout, "%s %d\n", score[i].name, score[i].score);
	}
	sortScore(i);
	for (j = 0; j < i; j++) {
		rankScore(j);
	}

	printf("\nOutput (output5.txt) : \n");
	fprintf(output, "Name       Score Rank");
	for (i = 0; i < 10; i++) {
		// print the output datas
		fprintf(stdout, "%10s %5d %4d\n", score[i].name, score[i].score, score[i].rank);
		// output the data to text file ("output.txt")
		fprintf(output, "%10s %5d %4d\n", score[i].name, score[i].score, score[i].rank);
	}

	fclose(input);
	fclose(output);
}