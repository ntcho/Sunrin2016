#include <stdio.h>

void main() {
	FILE *input = fopen("input.txt", "r");
	FILE *output = fopen("output.txt", "w");

	int i;
	int studentCount;
	int sj1, sj2, sj3;

	fscanf(input, "%d\n", &studentCount);
	for (i = 0; i < studentCount; i++) {
		fscanf(input, "%d %d %d\n", &sj1, &sj2, &sj3);
		// print the datas
		fprintf(output, "%.2lf\n", ((sj1 + sj2 + sj3) / 3.0));
		// output the data to text file ("output.txt")
		fprintf(stdout, "%.2lf\n", ((sj1 + sj2 + sj3) / 3.0));
	}

	fclose(input);
	fclose(output);
}