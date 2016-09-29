#include <stdio.h>

// usually use UPPERCASE letters for naming struct variables
// global variable
struct PERSON {
	char name[20];
	char phone[16];
	int age;
};

void main() {
	struct PERSON u_jin = { "Lee U Jin", "010-1234-5678", 17 };

	printf("Output struct PERSON u_jin\n\n");
	printf("u_jin.name  = %s\n", u_jin.name);
	printf("u_jin.phone = %s\n", u_jin.phone);
	printf("u_jin.age   = %d\n", u_jin.age);
}