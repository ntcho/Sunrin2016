#include <stdio.h>

struct Person {
	char *name;
	int age;
};

void printPerson(struct Person *person) {
	printf("Name %s\n", person->name);
	printf("Age  %d\n", person->age);
}

struct Person setMember(char *name, int age) {
	struct Person p;
	p.name = name;
	p.age = age;
	return p;
}

void main() {
	struct Person nathan;
	struct Person *nathan_pt;
	nathan_pt = &nathan;
	nathan = setMember("Nathan Cho", 17);
	printPerson(nathan_pt);
}