#include <stdio.h>
#include <string.h>

char searchResult[100][100] = { {0} };

void swap(char string[100], char result[100]) {
	char tmp[100];
	strcpy(tmp, string);
	strcpy(string, result);
	strcpy(result, tmp);
}

void insertSort(char string[100]) {
	if (searchResult[0][0] == 0) {
		//empty
		strcpy(searchResult[0], string);
	}
	else {
		for (int i = 0; i < 100; i++) {
			if (searchResult[i] != NULL) {
				for (int j = 0; j < 100; j++) {
					if (string[j] != '\0') {
						if (searchResult[i][j] == string[j]) {
							//same string
							continue;
						}
						else if (searchResult[i][j] < string[j]) {
							//sorted
							break;
						}
						else {
							//not sorted
							swap(searchResult[i], string);
						}
					}
					else {
						break;
					}
				}
			}
			else {
				break;
			}
		}
	}
}

void search(char searchKeyword, char string[100][100]) {
	printf("Searching for letter \"%c\":\n", searchKeyword);
	int searchIndex = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (string[i][j] == '\0') {
				//end of string
				break;
			}
			else if (string[i][j] == searchKeyword) {
				//found
				insertSort(string[i]);
			}
		}
	}
}

void main() {
	FILE *input = fopen("input.txt", "r");
	FILE *output = fopen("output.txt", "w");

	char word[100][100];
	char searchKeyword;

	printf("Input (input.txt)\n");
	int i = 0;
	while (fgets(word[i++], 100, input) != NULL) {
		printf("%s", word[i - 1]);
	}
	printf("\n");

	scanf("%c", &searchKeyword);
	search(searchKeyword, word);

	printf("Output (output.txt)\n");

	for (int i = 0; i < 100; i++) {
		if (searchResult != NULL) {
			fprintf(output, "%s", searchResult[i]);
			fprintf(stdout, "%s", searchResult[i]);
		}
		else {
			break;
		}
	}
}