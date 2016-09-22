#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

int str_chnum(const char *str, char c) {
	int count = 0;

	while (*str != '\0') {
		if (*str++ == c) {
			count++;
		}
	}
	return count;
}

void main() {
	char str[100];
	char c;
	int result;

	printf("Enter string : ");
	scanf("%s", str);

	printf("Enter character : ");
	scanf(" %c", &c);

	result = str_chnum(str, c);
	printf("\nCharacter %c is used %d times in string %s\n", c, result, str);
}