#include <stdio.h>

int main() {
	char str[100];
	int i = 0;
	int end = 0;
	int minus;

	printf("Enter string : ");
	fgets(str, 100, stdin);

	for (i = 0; str[i] != '\0'; i++);

	printf("String without number : ");
	while (str[i] != '\0') {

		i++;
	}
	printf("\n");

	return 0;
}