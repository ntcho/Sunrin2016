#include <stdio.h>
#include <string.h>

int main()
{
	int a, b = 0, d;
	char c[100];
	printf("Enter a sentence : ");
	gets_s(c, 100);
	d = strlen(c);
	for (a = 0; a<d; a++)
		if (c[a] == 32 || c[a + 1] == '\0')
			b++;
	printf("\nCount of words : %d\n", b);
	return 0;
}