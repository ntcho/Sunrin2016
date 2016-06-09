#include <stdio.h>

int main() {
	char str[100];
	int i = 0;
	int end = 0;
	int minus;

	printf("Enter string : ");
	fgets(str, 100, stdin);

	printf("String backwards : ");
	while (str[i] != '\0') {
		minus = (int)'a' - (int)'A';
		if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - minus);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] + minus);
		}
		else {
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");

	return 0;
}