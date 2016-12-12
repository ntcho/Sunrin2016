#include <stdio.h>

static int COUNT = 5;

struct Person {
	char id[7];
	char name[30];
	int join;
};

void printPerson(Person person) {
	printf("\n%s / %s / %d", person.id, person.name, person.join);
}

void main() {
	Person p1 = { "SJH630", "Junghyeon Song", 2010 };
	Person p2 = { "KKW231", "Gunwook Kim", 2013 };
	Person p3 = { "KMJ542", "Myeongja Kim", 2016 };
	Person p4 = { "KSK803", "Seonkyoung Kim", 2008 };
	Person p5 = { "LWR211", "Wangryeol Lee", 2014 };

	Person people[5] = { p1, p2, p3, p4, p5 };

	printf("People after 2014 : ");
	for (int i = 0; i < COUNT; i++) {
		if (people[i].join >= 2014) {
			printPerson(people[i]);
		}
	}
	printf("\n");
	getchar();
}