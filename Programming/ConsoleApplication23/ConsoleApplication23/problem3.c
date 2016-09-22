#include <stdio.h>

//09_3_Pointer(String)_File.hwp look for it

void putStrDgt(const char *st) {
	// remove all characters, print only numbers
	while (*st) {
		if (*st >= '0' && *st <= '9') {
			putchar(*st);
		}
		*st++;
	}
}

void main() {
	char str[] = "0surasdf61293sdd13";
	putStrDgt(str);
}