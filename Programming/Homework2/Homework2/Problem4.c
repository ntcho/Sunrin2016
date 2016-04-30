#include <stdio.h>
#include <conio.h>
int main() {
	//A program that calculates how many coupon will be given
	int a, b, c, d, e, f, result = 0;
	printf("[?? ??]\n--??--\n");
	printf("???\t???\t???\n???\t? ?\t???\n—????--\n");

	printf("1. ??? : ");
	scanf("%d", &a);

	printf("2. ??? : ");
	scanf("%d", &b);

	printf("3. ??? : ");
	scanf("%d", &c);

	printf("4. ??? : ");
	scanf("%d", &d);

	printf("5. ?  ? : ");
	scanf("%d", &e);

	printf("6. ??? : ");
	scanf("%d", &f);

	if (a + b + c > 0)
		result++;
	if (d + e + f >= 10)
		result++;
	printf("---?? ??---\n??? ?? : %d?", result);
	getch();
	return 0;
}