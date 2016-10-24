#include <stdio.h>

// Call by value

struct Person {
	char *name;
	int age;
};

void printPerson(struct Person *person) {
	printf("Name %s\n", person->name);
	printf("Age  %d\n\n", person->age);
}

struct Person setMember(char *name, int age) {
	struct Person p;
	p.name = name;
	p.age = age;
	return p;
}

void funcValue(struct Person p) {
	p.name = "Ronaldo";
	p.age = 30;
	struct Person *p_pt;
	p_pt = &p;
	printPerson(p_pt);
}

void main() {
	struct Person nathan;
	struct Person *nathan_pt;
	nathan_pt = &nathan;
	funcValue(nathan);
	nathan = setMember("Nathan Cho", 17);
	printPerson(nathan_pt);
}