#include <stdio.h>

struct Menu {
	int no;
	char food[30];
	int price;
	int check;
};

Menu m1 = {
	1, "Bibimbap", 5000, 0
};

Menu m2 = {
	2, "Tonkatsu", 8000, 0
};

Menu m3 = {
	3, "Samkeytang", 12000, 0
};

Menu menu[3] = {
	m1, m2, m3
};

void printMenu(Menu menu) {
	printf("Menu\n");
	
}

void main() {
	printf("Time over\n");
	/*
	int value = 1;

	while (value == 1) {
		printf("\n\nChange point [true : 1 / false = 0] : ");
		scanf("%d", &value);
		if (value == 1) {
			rect = editRect(rect);
		}
	}
	*/
}