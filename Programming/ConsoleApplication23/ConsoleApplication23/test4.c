#include <stdio.h>
#include <string.h>

void main() {
	char c[] = "computer";
	char *p = c;

	char *sp = "sunrin";

	printf("%s\n", p); // print all string
	
	while (*p != '\0') {
		printf("%c", *p++); // print one string at a time
	}
	puts("\n");

	printf("%s\n", sp); // print all string

	while (*sp) { // same as "*sp != '\0'"
		printf("%c", *sp++); // print one string at a time
	}
	puts("\n");
}