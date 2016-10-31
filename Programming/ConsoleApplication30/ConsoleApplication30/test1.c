#include <stdio.h>
#include <stdlib.h>

//Not working

struct List {
	char data;
	struct List *next;
};

typedef struct List node;

node *head, *tail;

void insertAfter(node *p, char inputData) {
	node *newNode = (node*)malloc(sizeof(node));
	printf("insertAfter('%c', '%c')\n", p->data, inputData);
	newNode->data = inputData;
	newNode->next = p->next;
	p->next = newNode;
}

void initLinkedList(void) {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	tail->next = NULL;
	head->next = tail;
	printf("Initialized Linked list\n");
}

node *searchNode(char searchData) {
	node *p = head->next;
	if (p == tail) {
		printf("Empty Linked List");
		return;
	}

	printf("searchNode('%c')\n", searchData);
	while (p->data != searchData) {
		p = p->next; //move to next node
	}
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
	printf("Linked List printed\n");
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

int main() {
	node *resultNode;
	initLinkedList();
	insertNode('A');
	insertNode('B');
	insertNode('C');
	printLinkedList();
	deleteHeadNextNode(); // Remove head's next node
	printLinkedList(); // B C
	resultNode = searchNode('B');
	if (resultNode->next != NULL) {
		printf("Node exists\n");
	}
	else {
		printf("Node doesn't exist\n");
	}
	resultNode = searchNode('X');
	if (resultNode->next != NULL) {
		printf("Node exists\n");
	}
	else {
		printf("Node doesn't exist\n");
	}
	insertAfter(searchNode('B'), resultNode);
	return 0;
}
