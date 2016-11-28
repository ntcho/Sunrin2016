#include <stdio.h>

float area(int a, int b) {
	return (a * b) / 2.0;
}

void main() {
	FILE *input = fopen("input4.txt", "r");
	FILE *output = fopen("output4.txt", "w");

	int i;
	int length[4][2];

	//while(fscanf(input, "%d, %d", &length[n][m], &length[n][m]) != EOF);
	//should use this with malloc

	printf("Input (input4.txt) : \n");
	for (i = 0; i < 4; i++) {
		fscanf(input, "%d %d", &length[i][0], &length[i][1]);
		// print the datas
		fprintf(stdout, "%d %d\n", length[i][0], length[i][1]);
	}
	printf("\nOutput (output4.txt) : \n");
	for (i = 0; i < 4; i++) {
		// print the output datas
		fprintf(stdout, "Adjacent : %d, Opposite : %d, Area of triangle : %.1f\n", length[i][0], length[i][1], area(length[i][0], length[i][1]));
		// output the data to text file ("output.txt")
		fprintf(output, "Adjacent : %d, Opposite : %d, Area of triangle : %.1f\n", length[i][0], length[i][1], area(length[i][0], length[i][1]));
	}

	fclose(input);
	fclose(output);
}