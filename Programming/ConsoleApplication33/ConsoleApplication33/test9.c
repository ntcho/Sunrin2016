#include <stdio.h>

void main() {
	FILE *input = fopen("input9.txt", "r");
	FILE *output = fopen("output9.txt", "w");
	int i;
	char string[100];
	int stringLength = 0;
	int wordLength = 0;
	int wordMaxLength = 0;
	int wordPosition = 0;

	printf("Output (output9.txt)\n");
	fgets(string, 100, input);

	for (i = 0; i < 100; i++) {
		if (string[i] != '\0') {
			if (string[i] == 32) {
				if (wordLength > wordMaxLength) {
					wordMaxLength = wordLength;
					wordPosition = i - wordMaxLength;
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

	printf("Length of string : %d\n", stringLength);
	printf("Starting position of the longest word : %d\n", wordPosition + 1);
	printf("The longest word in string : \"");
	for (i = 0; i < wordMaxLength; i++) {
		printf("%c", string[wordPosition + i]);
	}
	printf("\"\n"); 
	
	fprintf(output, "Length of string : %d\n", stringLength);
	fprintf(output, "Starting position of the longest word : %d\n", wordPosition + 1);
	fprintf(output, "The longest word in string : \"");
	for (i = 0; i < wordMaxLength; i++) {
		fprintf(output, "%c", string[wordPosition + i]);
	}
	fprintf(output, "\"\n");

	fclose(input);
	fclose(output);
}