#include <stdio.h>

void main() {
	char fileName[30];
	FILE *fileIn, *fileOut;
	char ch;

	fileIn = fopen("input.txt", "r");
	fileOut = fopen("output.txt", "w");
	if (fileIn == NULL) {
		printf("Error occured while reading the file\n");
	}
	while ((ch = fgetc(fileIn)) != EOF) {
		fputc(ch, stdout);  //stdout (standard output)
		fputc(ch, fileOut); //print output.txt
	}

	fclose(fileIn);
	fclose(fileOut);
}