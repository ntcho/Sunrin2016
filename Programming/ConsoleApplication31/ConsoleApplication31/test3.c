#include <stdio.h>

void main() {
	FILE *fileIn, *fileOut;
	char str[216];
	char ch;

	fileIn = fopen("input.txt", "r");
	fileOut = fopen("output.txt", "a");
	if (fileIn == NULL) {
		printf("Error occured while reading the file\n");
	}
	while ((fgets(str, sizeof(str), fileIn)) != NULL) {
		fputs(str, fileOut);
	}

	fclose(fileIn);
	fclose(fileOut);
}