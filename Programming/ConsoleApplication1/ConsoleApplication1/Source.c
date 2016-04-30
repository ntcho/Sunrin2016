#include <stdio.h>
#include <conio.h>

int main() {
	int weight = 0;
	int height = 0;
	int valid = 0;
	char name;

	printf("Enter your English Name : ");
	scanf("%s", &name);
	
	printf("\nEnter your weight : ");
	scanf("%d", &weight);

	printf("\nEnter your height : ");
	scanf("%d", &height);

	if (weight == 0) {
		printf("Invalid weight value \n");
		valid = 0;
	}
	else valid = 1;

	if (height == 0) {
		printf("Invalid weight value \n");
		valid = 0;
	}
	else valid = 1;

	if (valid == 1) {
		printf("Name : %s \n", &name);
		printf("Weight : %d \n", &weight);
		printf("Height : %d \n", &height);
	}
	else printf("Wrong value.");

	return 0;
}