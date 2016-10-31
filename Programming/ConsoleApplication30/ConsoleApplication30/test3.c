#include <stdio.h>
#include <stdlib.h>

struct List {
	char data;
	struct List *next;
};

typedef struct List node;

node *head, *tail; //Start and end node of the LinkedList

void initLinkedList(void) {
	head = (node*)malloc(sizeof(node)); //Allocate and link to the head
	tail = (node*)malloc(sizeof(node));
	tail->next = NULL;
	head->next = tail;
	printf("Initilized LinkedList\n");
}
void insertNode(char inputData) {
	node *newNode = (node*)malloc(sizeof(node));
	node *p;
	p = head;
	while (p->next != tail) {
		p = p->next;
	}
	newNode->data = inputData;
	newNode->next = tail;
	p->next = newNode;
}
void printLinkedList(void) {
	node *p;
	printf("LinkedList printed\n");
	p = head->next;
	while (p != tail) {
		printf("%-3c", p->data);
		p = p->next;
	}
	printf("\n");
}
void deleteHeadNextNode(void) {
	node *deleteNode = head->next;
	if (deleteNode == tail) {
		printf("No node to remove");
		return;
	}
	head->next = deleteNode->next;
	free(deleteNode);
}

node *searchNode(char searchData) {
	node *p = head->next;
	if (p == tail) {
		printf("Empty LinkedList\n");
		return 0;
	}
	printf("searchNode('%c')\n", searchData);
	while (p->data != searchData && p->next != NULL) {
		p = p->next;
	}
	return p;
}
void insertAfter(node *p, char inputData) {
	node *newNode = (node*)malloc(sizeof(node));
	printf("insertAfter('%c','%c') \n", p->data, inputData);
	newNode->data = inputData;
	newNode->next = p->next;
	p->next = newNode;
}
int main() {
	node *resultNode;
	initLinkedList();
	insertNode('A');
	insertNode('B');
	insertNode('C');
	printLinkedList();
	deleteHeadNextNode(); //remove next node of head
	printLinkedList(); // B C
	resultNode = searchNode('C');
	if (resultNode->next != NULL) {
		printf("Node exists in the LinkedList\n");
	}
	else {
		printf("Node doesn't exist in the LinkedList\n");
	}
	resultNode = searchNode('X');
	if (resultNode->next != NULL) {
		printf("Node exists in the LinkedList");
	}
	else {
		printf("Node doesn't exist in the LinkedList");
	}
	insertAfter(searchNode('B'), 'X');
	printLinkedList(); //B X
	return 0;
}