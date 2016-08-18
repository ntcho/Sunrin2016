#include <stdio.h>

static int x; // Global static variable, available all over the file, static; initialized by 0.

void subFunc(void) {
	static int z; // Local static variable, available in the main() procedure, static; initialized by 0.

	x++;
	// y++;, only available in the main() procedure
	z++;
	printf("In subFunc() procedure, x = %d, z = %d \n", x, z);
}

int main() {
	static int y; // Local static variable, available in the main() procedure, static; initialized by 0.

	x++;
	y++;
	// z++;, only available in the subFunc() procedure
	printf("In main() procedure, x = %d, y = %d \n", x, y);

	subFunc();

	return 0;
}