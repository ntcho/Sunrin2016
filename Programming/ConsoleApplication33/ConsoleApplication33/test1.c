#include <stdio.h>

void main() {
	FILE *input = fopen("input1.txt", "r");
	FILE *output = fopen("output1.txt", "w");

	char name[20];
	int kor;
	int eng;

	fscanf(input, "%s %d %d\n", name, &kor, &eng);
	printf("Input (input1.txt) : \n");
	// print the datas
	fprintf(stdout, "%s %d %d\n\n", name, kor, eng);
	// print the output datas
	printf("Output (output1.txt) : \n");
	fprintf(stdout, "%s %d %.1lf\n", name, (kor + eng), ((kor + eng) / 2.0));
	// output the data to text file ("output.txt")
	fprintf(output, "%s %d %.1lf\n", name, (kor + eng), ((kor + eng) / 2.0));

	fclose(input);
	fclose(output);
}