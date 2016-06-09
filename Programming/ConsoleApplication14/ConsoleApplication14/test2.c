#include <stdio.h>

int main() {
	char str[100];
	int i = 0;
	int end = 0;

	printf("Enter string : ");
	fgets(str, 100, stdin);

	for (i = 0; str[i] != '\0'; i++);

	printf("String backwards : ");
	i = i - 2;
	while (i >= 0) {
		printf("%c", str[i]);
		i--;
	}
	printf("\n");

	return 0;
}