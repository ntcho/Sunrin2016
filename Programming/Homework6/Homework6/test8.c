#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int n, i;

	printf("Enter string : ");
	fgets(arr, sizeof(arr), stdin);
	arr[strlen(arr) - 1] = '\0';
	n = strlen(arr);

	for (i = 0; i < n; i++) {
		if (arr[i] == arr[n - i - 1]) {
			continue;
		}
		else {
			printf("\nDifferent string\n\n");
			return 0;
		}
	}
	printf("\nSame string\n\n");
	return 0;
}