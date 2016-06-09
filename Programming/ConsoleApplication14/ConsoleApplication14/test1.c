#include <stdio.h>

int main() {
	char str[100];
	char search_Char;
	int i = 0;
	int count = 0;

	printf("Enter string : ");
	fgets(str, 100, stdin);

	printf("Enter character : ");
	scanf_s(" %c", &search_Char);

	printf("\nAlphabet %c is located in cell ", search_Char);

	while (str[i] != '\0') {
		if (str[i] == search_Char) {
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\nAlphabet %c is located in cell %d times", search_Char, count);
	printf("\n\n");

	return 0;
}