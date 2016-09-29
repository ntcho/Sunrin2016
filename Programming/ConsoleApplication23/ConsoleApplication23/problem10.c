#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

char *len(char *str, int n) {
	while (*str != '\0') {
		str++;
	}

	while (n-- >= 0) {
		str--;
	}

	return str;
}

void print(char *str) {
	printf("b = %s", str);
}

void main() {
	char str[255];
	int n;

	printf("Enter string : ");
	gets(str);

	printf("Enter integer : ");
	scanf("%d", &n);

	print(len(str, n));
}