#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

#define SIZE 20
#define BULLET 10

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#define PLAYERCHAR 'A'
#define BULLETCHAR '*'

#define FPS 10

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setBullet(int* x, int* y, int* d) {
	int pos = rand() % 4;
	switch (pos) {
	case UP:
		*x = rand() % (SIZE - 2) + 1;
		*y = 1;
		*d = DOWN;
		break;
	case DOWN:
		*x = rand() % (SIZE - 2) + 1;
		*y = SIZE - 2;
		*d = UP;
		break;
	case LEFT:
		*x = 1;
		*y = rand() % (SIZE - 2) + 1;
		*d = RIGHT;
		break;
	case RIGHT:
		*x = SIZE - 2;
		*y = rand() % (SIZE - 2) + 1;
		*d = LEFT;
		break;
	}
}

void setMap() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == 0 || i == SIZE - 1 || j == 0 || j == SIZE - 1) {
				printf("--");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void setFinish() {
	gotoxy(SIZE, SIZE / 2);
	char go[9] = { 'G', 'a', 'm', 'e', ' ', 'O', 'v', 'e', 'r' };

	for (int i = 0; i < 9; i++) {
		printf("%c", go[i]);
	}
}

void main() {
	setMap();

	bool isGameOver = false;

	int bx[BULLET] = { 0, };
	int by[BULLET] = { 0, };
	int bd[BULLET] = { 0, };

	srand(time(NULL));

	for (int i = 0; i < BULLET; i++) {
		setBullet(&bx[i], &by[i], &bd[i]);
	}

	int px = SIZE / 2;
	int py = SIZE / 2;

	int lpx = px;
	int lpy = py;

	int timems = 0;

	//Refresh game
	while (isGameOver == false) {
		for (int i = 0; i < BULLET; i++) {
			gotoxy(bx[i] * 2, by[i]);
			printf("%c", BULLETCHAR);
		}

		gotoxy(lpx * 2, lpy);
		printf("  ");

		gotoxy(px * 2, py);
		printf("%c", PLAYERCHAR);

		Sleep(1000 / FPS);
		timems += FPS;

		gotoxy(0, SIZE + 1);
		printf("Seconds : %d.%d", timems/1000, timems%1000);

		lpx = px;
		lpy = py;

		for (int i = 0; i < BULLET; i++) {
			gotoxy(bx[i] * 2, by[i]);
			printf("  ");

			switch (bd[i]) {
			case UP:
				by[i]--;
				break;
			case DOWN:
				by[i]++;
				break;
			case LEFT:
				bx[i]--;
				break;
			case RIGHT:
				bx[i]++;
				break;
			}

			if (bx[i] == 0 || bx[i] == SIZE - 1) {
				setBullet(&bx[i], &by[i], &bd[i]);
			}
			if (by[i] == 0 || by[i] == SIZE - 1) {
				setBullet(&bx[i], &by[i], &bd[i]);
			}
		}

		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			--py;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			++py;
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			--px;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			++px;
		}
		if (GetAsyncKeyState(VK_RSHIFT) & 0x8000) {
			system("cls");
			setMap();
		}

		if (px == 0 || px == SIZE - 1) {
			px = lpx;
		}
		if (py == 0 || py == SIZE - 1) {
			py = lpy;
		}

		for (int i = 0; i < BULLET; i++) {
			if (px == bx[i] && py == by[i]) { 
				isGameOver = true;
			}
		}
	}
	
	system("cls");
	gotoxy(0, 10);
	setFinish();

	scanf("%c");
}