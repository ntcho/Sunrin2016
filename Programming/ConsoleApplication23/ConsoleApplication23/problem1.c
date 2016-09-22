#include <stdio.h>
#include <string.h>

//09_3_Pointer(String)_File.hwp look for it

void putReverseStr(const char *st) {
	const char *p = st;
	while (*st != '\0') {
		st++;
	}
	if (st > p) {
		while (st-- > p) {
			putchar(*st);
		}
	}
}

void main() {
	char str[] = "sunrin";
	putReverseStr(str);
}