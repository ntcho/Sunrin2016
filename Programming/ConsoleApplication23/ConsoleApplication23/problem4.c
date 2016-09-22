#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

void concateStr(const char *s1, const char *s2) {
	while (*s1) { 
		putchar(*s1++);
	}
	while (*s2) { 
		putchar(*s2++);
	}
}

void main() {
	char str1[] = "asdf1234";
	char str2[] = "qwer5678";
	concateStr(str1, str2);
}