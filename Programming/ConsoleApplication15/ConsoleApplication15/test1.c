#include <stdio.h>

void main() {
	char name[5][30];
	int age[5];
	int i = 0;

	while (i < 5) {
		printf("Enter name : ");
		fgets(name[i], sizeof(name), stdin);
		printf("Enter age  : ");
		scanf("%d", &age[i]);
		i++;
	}

	puts("Result");
	for (i = 0; i < 5; i++) {
		printf("%d. %s : ", (i + 1), name[i]);
		printf("Age %d\n", age[i]);
	}
}