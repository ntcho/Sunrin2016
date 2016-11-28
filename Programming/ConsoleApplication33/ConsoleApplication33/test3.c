#include <stdio.h>

float avg(float a, float b) {
	return (a + b) / 2.0;
}

void main() {
	FILE *input = fopen("./temp/input3.txt", "r");
	FILE *output = fopen("./temp/output3.txt", "w");

	int i;
	float a[10];

	printf("Input (temp/input3.txt) : \n");
	for (i = 0; i < 10; i++) {
		fscanf(input, "%f ", &a[i]);
		// print the datas
		fprintf(stdout, "%.1f ", a[i]);
	}
	// print the output datas
	printf("\n\nOutput (temp/output3.txt) : \n");
	fprintf(stdout, "%.1f\n", avg(a[0], a[9]));
	// output the data to text file ("output.txt")
	fprintf(output, "%.1f\n", avg(a[0], a[9]));

	fclose(input);
	fclose(output);
}