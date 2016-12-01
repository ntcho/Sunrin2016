#include <stdio.h>

void main() {
	FILE *input = fopen("input6.txt", "r");
	FILE *output = fopen("output6.txt", "w");
	char string[100];

	printf("Output (output6.txt)");
	while ((fscanf(input, "%s", string)) != EOF) {
		fprintf(stdout, "%s\n", string);
		fprintf(output, "%s\n", string);
	}

	fclose(input);
	fclose(output);
}