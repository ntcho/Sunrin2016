#include <stdio.h>

void main() {
	char arr[100];
	int n, i;

	printf("Enter string : ");
	fgets(arr, sizeof(arr), stdin);
	arr[strlen(arr) - 1] = '\0';
	n = strlen(arr);

	int difference = (int)'A' - (int)'a';
	if (difference < 0) {
		difference = difference * -1;
	}

	for (i = 0; i < n; i++) {
		if ((int)arr[i] >= (int)'a' && (int)arr[i] <= (int)'z') {
			printf("%c", (int)arr[i] - difference);
		}
		else if ((int)arr[i] >= (int)'A' && (int)arr[i] <= (int)'Z') {
			printf("%c", (int)arr[i] + difference);
		}
		else {
			printf("%c", arr[i]);
		}
	}
	printf("\n\n");
}