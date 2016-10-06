#include <stdio.h>

struct member {
	char name[30];
	int height;
	float weight;
};

struct member tmp;
#define SWAP(a,b) {tmp = a; a = b; b = tmp;}

void insertionSort(struct member member[], int count) {
	int i, index;
	for (i = 1; i <= count - 1; i++) {
		index = i;
		while (index > 0 && member[index].height < member[index - 1].height) {
			SWAP(member[index], member[index - 1]);
			index--;
		}
	}
}

void printMember(struct member i) {
	printf("%10s %d %.1f\n", i.name, i.height, i.weight);
}

void printAllMember(struct member i[], int count) {
	int a;
	for (a = 0; a < count; a++) {
		printMember(i[a]);
	}
}

void inputMember(struct member person[], int count) {
	int i;
	printf("Input %d people's information : (name) (height) (weight)\n", count);
	for (i = 0; i < count; i++) {
		printf("Person %d : ", i + 1);
		scanf("%s", person[i].name);
		scanf("%d", &person[i].height);
		scanf("%f", &person[i].weight);
	}
	printf("Input finished\n\n");
}

void main() {
	struct member person[5];
	inputMember(person, 5);
	printAllMember(person, 5);
	insertionSort(person, 5);
	printf("\nPrint sorted people\n\n");
	printAllMember(person, 5);
}