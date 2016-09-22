#include <stdio.h>
#include <string.h>

void main() {
	char str[100]; // need this to operate
	char *p;

	// p = (char*)malloc(10);
	// could use this too

	// should allocate memory to use pointer sth.

	p = str;

	printf("Insert string : ");
	scanf("%s", p);
	printf("String : %s\n", p);
}