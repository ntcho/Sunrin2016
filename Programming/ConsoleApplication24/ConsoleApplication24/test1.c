#include <stdio.h>

// usually use UPPERCASE letters for naming struct variables
// global variable
struct CAR {
	char carName[20];
	char carOwner[20];
	int  yearBuilt;
	char carColor[20];
	int  carDoorCount;
};
struct CAR c1;
// struct CAR variable_name (can make a global variable)

void main() {
	// local variable
	struct FOOD {
		char foodName[20];
		double foodPrice;
	} f1; //variable_name; (can make variable with initalizing)

	struct CAR c2;
	printf("Size of struct CAR = %d\n", sizeof(struct CAR));
	printf("Size of struct FOOD = %d\n", sizeof(struct FOOD));

	printf("Size of struct CAR variable c1 (global variable) = %d\n", sizeof(c1));
	printf("Size of struct CAR variable c1 (local variable)  = %d\n\n", sizeof(c2));

	printf("Size of struct CAR variable c1.carName[20]  (global variable) = %d\n", sizeof(c1.carName));
	printf("Size of struct CAR variable c1.carOwner[20] (global variable) = %d\n", sizeof(c1.carOwner));
	printf("Size of struct CAR variable c1.yearBuilt    (global variable) = %d\n", sizeof(c1.yearBuilt));
	printf("Size of struct CAR variable c1.carColor[20] (global variable) = %d\n", sizeof(c1.carColor));
	printf("Size of struct CAR variable c1.carDoorCount (global variable) = %d\n\n", sizeof(c1.carDoorCount));

	printf("Size of struct CAR variable f1 (local variable)  = %d\n", sizeof(f1));
}