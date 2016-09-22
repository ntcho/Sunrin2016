#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

int str_equal(const char *s1, const char *s2) {
	while (*s1 == *s2) {
		if (*s1 == '\0') {
			return 1;
		}

		s1++;
		s2++;
	}
	return 0;
}

void main() {
	char str1[100];
	char str2[100];

	printf("Enter first string : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = '\0'; // change '\n' (default in fgets();) to '\0'

	printf("Enter second string : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0'; // change '\n' (default in fgets();) to '\0'

	if (str_equal(str1, str2) == 1) {
		puts("\nSame string");
	}
	else {
		puts("\nDifferent string");
	}
}