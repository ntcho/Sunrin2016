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
	printf("\n%2d %10s %dwon", menu.no, menu.food, menu.price);
}

void printAllMenu() {
	printf("--Menu--");
	for (int i = 0; i < 3; i++) {
		printMenu(menu[i]);
	}
}

void printCheckedMenu() {
	printf("\n--Bill--");
	int totalPrice = 0;
	for (int i = 0; i < 3; i++) {
		if (menu[i].check == 1) {
			printMenu(menu[i]);
			totalPrice += menu[i].price;
		}
	}
	printf("\n\n--Total--");
	printf("\n%dwon\n", totalPrice);
}

void main() {
	int value = 1;

	printAllMenu();
	printf("\n\n--Order--\n");
	printf("Input menu id [edit = 0]\n");
	while (value != 0) {
		printf("Input : ");
		scanf("%d", &value);
		//check true
		menu[value - 1].check = 1;
	}
	printCheckedMenu();
}