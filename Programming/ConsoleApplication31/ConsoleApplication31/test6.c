#include <stdio.h>

// under dev

struct Circle {
	float rad;
	float length;
};

void main() {
	FILE *circle;
	char str[216];
	char ch;
	struct Circle list[5];
	int i = 0;
	int n;

	circle = fopen("circle.txt", "r");
	if (circle == NULL) {
		printf("Error occured while reading the file\n");
	}
	while (fscanf(circle, "%f", &list[i].length) != EOF) {
		list[i].rad = list[i].length / 3.14 / 2.0;
		i++;
	}
	for (n = 0; n < i; n++) {
		fprintf(stdout, "Length : %.1f / Radius : %.2f",
			list[n].length, list[n].rad);
		printf("\n");
	}
	printf("\n");

	fclose(circle);
}