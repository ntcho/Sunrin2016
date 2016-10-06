#include <stdio.h>

struct member {
	int  no;
	char name[30];
	int pro;
	int os;
	int web;
	float avg;
};

struct member tmp;
#define SWAP(a,b) {tmp = a; a = b; b = tmp;}

void selectionSort(struct member member[], int count) {

	int indexMin, i, j;

	// loop through all numbers 
	for (i = 0; i < count - 1; i++) {

		// set current element as minimum 
		indexMin = i;

		// check the element to be minimum 
		for (j = i + 1; j < count; j++) {
			if (member[j].avg > member[indexMin].avg) {
				indexMin = j; 
			}
		}

		if (indexMin != i) {
			// swap the member 
			SWAP(member[indexMin], member[i]);
		}
	}
}

char grade(float s) {
	if (s >= 90) {
		return 'A';
	}
	else if (s < 90 && s >= 80) {
		return 'B';
	}
	else if (s < 80 && s >= 70) {
		return 'C';
	}
	else if (s < 70 && s >= 60) {
		return 'D';
	}
	else {
		return 'E';
	}
}

float avg(int a, int b, int c) {
	return (float)(a + b + c) / 3;
}

void printMember(struct member i) {
	printf("Number : %d\n", i.no);
	printf("Name   : %s\n", i.name);
	printf("Prog   : %d\n", i.pro);
	printf("Net/OS : %d\n", i.os);
	printf("WebPro : %d\n", i.web);
	printf("Avg    : %.2f\n", i.avg);
	printf("Grade  : %c\n\n", grade(i.avg));
}

void printAllMember(struct member i[], int count) {
	int a;
	for (a = 0; a < count; a++) {
		printMember(i[a]);
	}
}

void main() {
	struct member web_member[4] = {
		{ 1, "Sunkyoung Kim", 89, 75, 70, avg(web_member[0].web, web_member[0].os, web_member[0].pro) },
		{ 2, "Jyounghyeon Song", 67, 56, 80, avg(web_member[1].web, web_member[1].os, web_member[1].pro) },
		{ 3, "Hyeonju Kim", 75, 86, 96, avg(web_member[2].web, web_member[2].os, web_member[2].pro) },
		{ 4, "Eunseon Kim", 90, 100, 89, avg(web_member[3].web, web_member[3].os, web_member[3].pro) },
	};
	printAllMember(web_member, 4);
	selectionSort(web_member, 4);
	printf("Print sorted members\n\n");
	printAllMember(web_member, 4);
}