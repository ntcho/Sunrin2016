#include <stdio.h>
#include <math.h>

struct Point {
	int x;
	int y;
};

struct Rect {
	Point p1;
	Point p2;
};

int areaOf(Rect rect) {
	int height = abs(rect.p1.y - rect.p2.y);
	int width = abs(rect.p1.x - rect.p2.x);

	return width * height;
}

void printRect(Rect rect) {
	printf("\nLeft Top (x, y) : (%d, %d)", rect.p1.x, rect.p1.y);
	printf("\nRight Bottom (x, y) : (%d, %d)", rect.p2.x, rect.p2.y);
	printf("\nArea : %d", areaOf(rect));
}

Rect initRect(Rect rect) {
	rect = {
		rect.p1 = {
		0, 0
	},
		rect.p2 = {
		0, 0
	}
	};

	printf("\nRect initialized");
	printRect(rect);

	return rect;
}

Rect editRect(Rect rect) {
	printf("\nLeft Top (x, y) : ");
	scanf("%d %d", &rect.p1.x, &rect.p1.y);
	printf("Right Bottom (x, y) : ");
	scanf("%d %d", &rect.p2.x, &rect.p2.y);
	if (rect.p1.x > rect.p2.x || rect.p1.y < rect.p2.y) {
		printf("\nPlease enter bigger value in left top value than right bottom value\n");
		rect = initRect(rect);
		printf("\n");
		editRect(rect);
	}
	else {
		printRect(rect);
	}
	return rect;
}

void main() {
	Point p1;
	Point p2;
	Rect rect = {
			rect.p1 = {
			0, 0
		},
			rect.p2 = {
			0, 0
		}
	};

	printf("Init value");
	rect = initRect(rect);

	int value = 1;

	while (value == 1) {
		printf("\n\nChange point [true : 1 / false = 0] : ");
		scanf("%d", &value);
		if (value == 1) {
			rect = editRect(rect);
		}
	}
}