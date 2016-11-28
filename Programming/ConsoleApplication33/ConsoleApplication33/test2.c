#include <stdio.h>

int sum(int a, int b) {
	int i;
	int sum = 0;
	if (a < b) {
		for (i = a; i <= b; i++) {
			sum += i;
		}
	}
	else {
		for (i = b; i <= a; i++) {
			sum += i;
		}
	}
	return sum;
}

void main() {
	FILE *input = fopen("input2.txt", "r");
	FILE *output = fopen("output2.txt", "w");

	int i;
	int a, b;

	fscanf(input, "%d %d\n", &a, &b);
	printf("Input (input2.txt) : \n");
	// print the datas
	fprintf(stdout, "%d %d\n\n", a, b);
	// print the output datas
	printf("Output (output2.txt) : \n");
	fprintf(stdout, "%d\n", sum(a, b));
	// output the data to text file ("output.txt")
	fprintf(output, "%d\n", sum(a, b));

	fclose(input);
	fclose(output);
}