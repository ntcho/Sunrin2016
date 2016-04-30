#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
	/*
	int r, i, j, k, cnt;
	char c;

	printf("Enter a lowercase letter : ");
	scanf("%c", &c);

	cnt = c - 'a' + 1;

	for(i = 0; i < cnt; i++){
	for(j = (cnt-1); j>=i; j--){
	printf(" ");
	}
	for(j = 0; j <= i; j++){
	printf("%c", (c-j));
	}
	printf("\n");
	}
	*/

	/*
	int rnd, i, count, answer;
	srand((unsigned int)time(NULL));


	//for (i=1; i<=100; i++){
	//rnd=rand()%100 + 1;
	//	printf("%-5d \t",rnd);
	//}

	rnd=rand()%100 + 1;

	printf("Guess a number!\n");
	printf("Unlimited try!");

	count = 0;
	do{
	printf("\n\nEnter a integer : ");
	scanf("%d", &answer);
	if (answer > rnd) printf("The answer should be smaller") ;
	else if (answer < rnd) printf("The answer should be bigger");
	else break;

	count++;
	} while(rnd != answer);

	if(count == 1)printf("\nYou won the FUCKIN game by MADAFUCKIN %d try!, Congrats!", count);
	else printf("\nYou won the FUCKIN game by MADAFUCKIN %d tries!, Congrats, dumbass!\n\n", count);

	*/

	int rnd = 0;
	int sum = 0;
	int res = 0;
	int i = 0;
	int count = 0;
	int type = 0;
	char ch;

	do {
		printf("Enter which stick you want to use (1: semicircle type, 2: fat type) : ");
		scanf("%d", &type);

		if (type == 1 || type == 2) break;
		else printf("\nWrong input, re-enter the value.\n\n");
	} while (type != 1 || type != 2);

	printf("\nGame start!\n");

	do {
		count++;
		printf("\nRound %d\n", count);
		for (i = 0; i < 4; i++) {

			rnd = rand() % 3;
			switch (rnd) {
			case 0: sum = sum; printf("0 "); break;
			case 1: sum = sum++; printf("1 "); break;
			case 2: sum = sum++; printf("1 "); break;
			}

			rnd = rand() % 100;

			switch (rnd) {
			case 0: sum = 0; break;
			default: break;
			}
		}

		printf("\n");

		switch (sum) {
		case 0: printf("1 Step Backward!"); break;
		case 1: printf("1 Step Forward!"); break;
		case 2: printf("2 Step Forward!"); break;
		case 3: printf("3 Step Forward!"); break;
		case 4: printf("4 Step Forward!"); break;
		}

		printf("\n");

		do {
			printf("\nDo you want to continue? (Y/N) : ");
			scanf("%c", &ch);
			if (ch == 'y') break;
			else if (ch == 'n') break;
			else;
		} while (ch == 'n' || ch == 'y');

		if (ch == 'n' || ch == 'y') break;
		else;

		sum = 0;
	} while (ch != 'n');

	return 0;
}

