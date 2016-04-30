#include <stdio.h>
#include <conio.h>

int main() {
	int a, b;
	int oddcnt = 0, evencnt = 0;

	printf("Enter : ");
	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
		evencnt++;
	else
		oddcnt++;

	if (b % 2 == 0)
		evencnt++;
	else
		oddcnt++;

	printf("\nresult : %d , %d \n\n", evencnt, oddcnt);
}