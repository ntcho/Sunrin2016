#include <stdio.h>

void put_nchar(char ch, int no);

int main() {
	char ch;
	int no;

	printf("Enter character : ");
	scanf("%c", &ch);

	printf("Enter repeat number : ");
	scanf("%d", &no);

	put_nchar(ch, no);

	printf("\n");

	return 0;
}

void put_nchar(char ch, int no) {
	int i;

	for (i = 0; i < no; i++) {
		printf("%c", ch);
	}
}