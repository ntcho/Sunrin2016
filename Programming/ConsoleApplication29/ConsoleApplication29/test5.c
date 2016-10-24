#include <stdio.h>

// struct in struct
// recursive struct?

struct BookInfo {
	char book_name[20];
	char author[10];
	int year;
	int price;
	int quantity;
};

struct PublisherInfo {
	char publisher_name[20];
	char address[50];
	char phone[12];
};

struct Book {
	int code;
	struct BookInfo book;
	struct PublisherInfo publisher;
};

void main() {
	struct Book book1 = {
		1,
		{"C Essential", "Google", 2015, 0, 14},
		{"Google Play", "California, Google Avn.", "080"}
	};
	// too lazy to print them all
}