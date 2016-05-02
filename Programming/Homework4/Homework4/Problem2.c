#include <stdio.h>

int main(){
	int a = 0, b;
	printf("Enter a positive integer: ");
		scanf("%d", &b);
	while (b>0)
	{
		a += b % 10;
		b /= 10;
	}
	printf("%d\n", a);
	return 0;
}