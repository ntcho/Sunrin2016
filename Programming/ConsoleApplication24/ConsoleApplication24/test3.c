#include <stdio.h>
#include <math.h>

// usually use UPPERCASE letters for naming struct variables
// global variable
struct POINT {
	int x;
	int y;
};

double distance(struct POINT a, struct POINT b) {
	int x, y;
	if (a.x > b.x) {
		x = a.x - b.x;
	}
	else {
		x = b.x - a.x;
	}

	if (a.y > b.y) {
		y = a.y - b.y;
	}
	else {
		y = b.y - a.y;
	}

	return sqrt(x*x + y*y);
}

void main() {
	struct POINT p1;
	struct POINT p2;

	printf("first point = ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("second point = ");
	scanf("%d %d", &p2.x, &p2.y);

	printf("\nDistance between two points = %.10lf\n", distance(p1, p2));
}