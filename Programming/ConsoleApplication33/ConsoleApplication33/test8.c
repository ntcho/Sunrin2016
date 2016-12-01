#include <stdio.h>

void main() {
	FILE *input = fopen("input8.txt", "r");
	FILE *output = fopen("output8.txt", "w");
	int inputCount;
	int i;
	char string[10][100];

	printf("Output (output8.txt)\n");
	fscanf(input, "%d\n", &inputCount);

	for (i = 0; i < inputCount; i++) {
		fgets(string[i], 100, input);
	}

	for (i = inputCount - 1; i >= 0; i--) {
		fprintf(output, "%s", string[i]);
		fprintf(stdout, "%s", string[i]);
	}

	fclose(input);
	fclose(output);
}