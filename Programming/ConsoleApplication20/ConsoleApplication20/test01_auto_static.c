#include <stdio.h>

void subFunc(void) {
	auto   int x = 0;
	static int y = 0; // static int, available within where called (subFunc procedure), initialized with int 0
	printf("auto x = %d, static y = %d \n", x, y);
	x++; // auto int, will be initialized everytime when procedure called
	y++; // static int, keeps the value 'static' (opposite of auto data value)
}

int main() {
	int i; // auto int, available in main procedure, initialized with trash value
	for (i = 0; i < 5; i++) {
		subFunc();
	}
	return 0;
}