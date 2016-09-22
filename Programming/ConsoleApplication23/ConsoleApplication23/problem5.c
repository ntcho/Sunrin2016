#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it
//Blowed up

char *str_ncat(char *s1, const char *s2, int n) {
	char *tmp = s1;
	while (*s1) {
		s1++;
	}
	while (n--) {
		if (!(*s1++ = *s2++)) {
			break;	
		}
	}
	*s1 = '\0';

	return tmp;
}

void main() {
	char str1[] = "asdf1234";
	char str2[] = "qwer5678";

	char *p;
	p = str_ncat(str1, str2, 10);
	printf("%s", p);
}