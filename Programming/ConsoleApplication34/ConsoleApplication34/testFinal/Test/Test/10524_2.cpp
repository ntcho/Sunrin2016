#include <stdio.h>
#include <math.h>

struct Point {
	int x;
	int y;
};

double calcDistance(Point p1, Point p2) {
	int height = abs(p1.y - p2.y);
	int width = abs(p1.x - p2.x);

	return sqrt(pow(height, 2) + pow(width, 2));
}

void main() {
	Point p1 = {
		0, 0
	};
	Point p2 = {
		0, 0
	};

	printf("p1(x, y) : ");
	scanf("%d", &p1.x);
	scanf("%d", &p1.y);

	printf("p2(x, y) : ");
	scanf("%d", &p2.x);
	scanf("%d", &p2.y);

	printf("\nResult");
	printf("\nDistance between p1 and p2 is %.2f\n", calcDistance(p1, p2));
}