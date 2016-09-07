// About pointer
#include <stdio.h>

void main() {
	int a = 10; // integer varable
	int *p; // pointer variable
	p = &a; // references the memory value of the a

	puts("Print info about a");
	printf("a  = %d\n", a);
	printf("&a = %p\n", &a);
	printf("&a = %x\n", &a);

	puts("\nPrint info pbout p");
	printf("p  = %d\n", p);
	printf("&p = %p\n", &p);
	printf("&p = %x\n", &p);

	*p = 20; // Same as "a = 20"
	printf("\na  = %d\n", a);
}