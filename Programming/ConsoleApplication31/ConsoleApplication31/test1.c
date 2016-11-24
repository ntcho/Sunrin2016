#include <stdio.h>

void main() {
	char fileName[30];
	FILE *file;
	char ch;

	printf("File name : ");
	scanf("%s", fileName);

	//file = fopen(fileName, "r"); //open in reading mode (causes crash)
	file = fopen(fileName, "r"); //open in writing mode
								 //the file should be in the same directory where is the c source file is
	if (file == NULL) {
		printf("This file doesn't exist\n");
	}
	else {
		printf("This file exists\n");
		printf("File contains these string:\n");
		while ((ch = fgetc(file)) != EOF) {
			// EOF stands for "end of file", defined as -1
			//fputc(ch, stdout);
			//same as printf("%c", ch);
			printf("%c", ch);
		}
		printf("\n");
		fclose(file);
	}

}