#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, ex;
	scanf("%d %d", &a, &b);

	if (a < b) {
		ex = b;
		b = a;
		a = ex;
	}

	if (a%b == 0) {
		printf("true\n");
	}
	else printf("false\n");

	return 0;
}