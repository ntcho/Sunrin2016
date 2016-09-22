#include <stdio.h>
#include <string.h>

//09_3_Pointer(String)_File.hwp look for it

void cntDigit(const char *st, int cnt[]) {
	int i;
	for (i = 0; i < 10; i++) {
		*(cnt + i) = 0;
	}

	while (*st) {
		if (*st >= '0' && *st <= '9') {
			cnt[*st - '0']++; // ASCII calculation
		}
		st++;
	}
}

void main() {
	char str[] = "0sur-asdf61293sdd13";
	int cnt[10]; //Record number count
	int i;

	//printf("Input string with number : ");
	//scanf("%s", *str); //exploded
	cntDigit(str, cnt);

	for (i = 0; i < 10; i++) {
		printf("cnt[%d] : %d\n", i, cnt[i]);
	}
}