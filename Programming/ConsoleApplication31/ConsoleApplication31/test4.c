#include <stdio.h>

void main() {
	FILE *score;
	char str[216];
	char ch;

	score = fopen("score.dat", "r");
	if (score == NULL) {
		printf("Error occured while reading the file\n");
	}
	printf("No Name Ko En Ma\n\n");
	while ((fgets(str, sizeof(str), score)) != NULL) {
		printf("%s", str);
	}
	printf("\n\n");

	fclose(score);
}