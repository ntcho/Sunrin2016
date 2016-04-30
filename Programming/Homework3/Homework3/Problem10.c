#include <stdio.h>
#include <conio.h>

int main() {
	//A program that calculates the square is layered over
	int ax1, ax2, ay1, ay2, bx1, bx2, by1, by2 = 0;

	printf("Enter first square coordinate : ");
	scanf("%d %d %d %d", &ax1, &ay1, &ax2, &ay2);

	printf("Enter second square coordinate : ");
	scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);

	if (ax1 <= 200 && ax2 <= 200 && ay1 <= 200 && ay2 <= 200 && bx1 <= 200 && bx2 <= 200 && by1 <= 200 && by2 <= 200) {
		if (((ax1 <= bx1 && ax2 >= bx1) || (ax1 <= bx2 && ax2 >= bx2)) && ((ay1 <= by1 && ay2 >= by1) || (ay1 <= by2 && ay2 >= by2))) {
			printf("Two squares are placed on each other.");
		}
		else printf("Two squares don't collide.");
	}
	else printf("Error");

	getch();
	return 0;
}