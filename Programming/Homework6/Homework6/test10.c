#include <stdio.h>
#include <string.h>

void main() {
	char arr[100];
	char alphaCnt[200] = { 0, };
	int n, i;

	printf("Enter string : ");
	fgets(arr, sizeof(arr), stdin);
	arr[strlen(arr) - 1] = '\0'; //Remove Line Feed
	n = strlen(arr);
	for (i = 0; i < n; i++) {
		if (arr[i] != ' ') {
			alphaCnt[arr[i]]++;
		}
	}
	for (i = 0; i < 200; i++) {
		if (alphaCnt[i] != 0) {
			printf("%c -- %d\n", i, alphaCnt[i]);
		}
	}
}