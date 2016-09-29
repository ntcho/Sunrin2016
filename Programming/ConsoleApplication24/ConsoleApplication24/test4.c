#include "book.h"

void printBookInfo(struct BOOK book) {
	printf("Book Number    = %d\n", book.bookNumber);
	printf("Book Name      = %s\n", book.bookName);
	printf("Book Publisher = %s\n", book.bookPublisher);
	printf("Book Author    = %s\n", book.bookAuthor);
	printf("Book Price     = %d\n", book.bookPrice);
}

void main() {
	struct BOOK book1 = {
		1,
		"Answer to all problems",
		"42",
		"42",
		42
	};

	printBookInfo(book1);
}