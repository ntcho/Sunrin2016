#include <stdio.h>

void main() {
	FILE *input = fopen("input9.txt", "r");
	FILE *output = fopen("output9.txt", "w");
	int i, j;
	char string[100];
	int stringLength = 0;
	int wordLength = 0;
	int wordMaxLength = 0;
	int wordPosition[100] = { 0 };
	int wordPositionCounter = 0;

	printf("Output (output9.txt)\n\n");
	fgets(string, 100, input);

	for (i = 0; i < 100; i++) {
		if (string[i] != '\0') {
			if (string[i] == 32) {
				if (wordLength > wordMaxLength) {
					wordMaxLength = wordLength;
					wordPositionCounter = 0;
					wordPosition[wordPositionCounter] = i - wordMaxLength;
				}
				else if (wordLength == wordMaxLength) {
					wordPosition[++wordPositionCounter] = i - wordMaxLength;
				}
				wordLength = 0;
			}
			else {
				wordLength++;
			}
			stringLength++;
		}
		else {
			break;
		}
	}

	printf("Length of full string : %d\n", stringLength);
	printf("Starting position of the longest word(s) :");
	for (i = 0; i < wordPositionCounter + 1; i++) {
		if (i > 0) {
			printf(",");
		}
		printf(" %d", wordPosition[i] + 1);
	}

	printf("\nThe longest word in string : \"");
	for (j = 0; j < wordPositionCounter + 1; j++) {
		if (j > 0) {
			printf("\", \"");
		}
		for (i = 0; i < wordMaxLength; i++) {
			printf("%c", string[wordPosition[j] + i]);
		}
	}

	printf("\"\n");

	fprintf(output, "Length of full string : %d\n", stringLength);
	fprintf(output, "Starting position of the longest word(s) :");
	for (i = 0; i < wordPositionCounter + 1; i++) {
		if (i > 0) {
			fprintf(output, ",");
		}
		fprintf(output, " %d", wordPosition[i] + 1);
	}

	fprintf(output, "\nThe longest word in string : \"");
	for (j = 0; j < wordPositionCounter + 1; j++) {
		if (j > 0) {
			fprintf(output, "\", \"");
		}
		for (i = 0; i < wordMaxLength; i++) {
			fprintf(output, "%c", string[wordPosition[j] + i]);
		}
	}

	fprintf(output, "\"\n");

	fclose(input);
	fclose(output);
}