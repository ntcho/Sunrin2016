#include <stdio.h>

int main() {
	int height;

	printf("Input Your Height(cm) : ");
	scanf("%d", &height);

	printf("--------Output--------------\n");
	printf("Convert(Cm -> feet) : %.2ffeet\n", (float)height/30.48);
	printf("--------------------------\n");

	getch();
	return 0;
}