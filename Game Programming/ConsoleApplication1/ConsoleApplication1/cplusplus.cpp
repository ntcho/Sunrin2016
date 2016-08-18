#include <iostream>
#include <Windows.h>

using namespace std;

void pointer1() {
	//Simple input output method

	int a = 4;

	//C
	printf("Message %d \n", a);

	printf("Enter : ");
	scanf_s("%d", &a);
	printf("%d\n", a);

	//C++
	cout << "Message " << a << endl;

	cout << "Enter : ";
	cin >> a;
	cout << a << endl;
}

void pointer2() {
	//Memory allocating method

	//C
	int *p = (int*)malloc(sizeof(int));
	(*p) = 4;
	free(p);

	//C++
	int * pp = new int;
	(*pp) = 4;
	delete pp;
}

void pointer3() {
	//Use same name for different function method

	int add(int a, int b);
	float add(float a, float b);

	int i = add(3, 4);
	float f = add(3.3f, 4.4f);
}

namespace NS {
	int n = 3;
}

int n = 2;

void pointer4() {
	int n = 1;
	cout << n << endl;
	cout << ::nan << endl;
	cout << NS::n << endl;
}

void main() {
	pointer4();
}