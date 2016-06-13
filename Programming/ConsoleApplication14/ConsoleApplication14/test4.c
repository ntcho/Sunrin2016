#include <stdio.h>

int main() {
	char str[100];
	int i = 0;
	int count = 0;
	int move = 0;

	printf("Enter string : ");
	fgets(str, 100, stdin);

	printf("String without number : ");
	/*
	count = sizeof(str) / sizeof(int);

	for (i = 0; i < count; i++){
		if (!(str[i] >= '0' && str[i] <= '9')) {
			str[i] = str[i + 1];
			move++;
		}
		printf("%c", str[i]);
		i++;
	}
	for (i = 0; i <= move; i++) {
		str[move - i] = '\0';
	}
	*/
	while (str[i] != '\0') {
		if (!(str[i] >= '0' && str[i] <= '9')) {
			str[i] = str[i + 1];
			move++;
		}
	}
	printf("\n");

	return 0;
}