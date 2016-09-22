#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

void str_toUpper(char *str) {
	while (*str != '\0') {
		if (*str >= 'a' && *str <= 'z') {
			*str -= 'a' - 'A';

			//printf("%c", *str);
			//same as using puts();
		}
		str++;
	}
}

void str_toLower(char *str) {
	while (*str != '\0') {
		if (*str >= 'A' && *str <= 'Z') {
			*str += 'a' - 'A';

			//printf("%c", *str);
			//same as using puts();
		}
		str++;
	}
}

void main() {
	char str1[100];

	printf("Enter string : ");
	scanf("%s", str1);

	str_toUpper(str1);
	puts(str1);

	str_toLower(str1);
	puts(str1);
}