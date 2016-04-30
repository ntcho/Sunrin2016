#include <stdio.h>
int main() {
	int hex = 0;
	scanf("%x", &hex);
	printf("%x in decimal is %d and in octal is %o.\n", hex, hex, hex);
	return 0;
}