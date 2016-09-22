#include <stdio.h>
#include <string.h>

//09_3_Pointer(String)_File.hwp look for it

void rev_string(char *st) {
	char *pt = st;
	char tmp;

	//Change both end values to reverse

	while (*st != '\0') {
		pt++;
	}

	if (pt != st) {
		pt--;
		// Repeat until they change their 
		while (pt > st) {
			// Change st - pt
			tmp = *pt;
			*pt = *st;
			*st = tmp;

			// Move pointer to come one step to center
			st++;
			pt--;

			// same as this;
			// tmp = *pt
			// *pt-- = *st;
			// *st++ = tmp;
		}
	}
}

void main() {
	char str[100];

	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0'; // change '\n' (default in fgets();) to '\0'

	rev_string(str);

	puts("Reversed string : ");
	printf("%s\n", str);
}