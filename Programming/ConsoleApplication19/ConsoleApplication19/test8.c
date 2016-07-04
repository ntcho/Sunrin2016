#include <stdio.h>

void main(){
	printf("%d", getFunc(12, 14));
}

int getFunc(int a, int b) {
	int result = 1, i;
	int range = min(a, b);

	for (i = range; i <= range; i--) {
		if (a%i == 0 && b%i == 0) {
			result = i;
			break;
		}
	}

	return i;
}

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}