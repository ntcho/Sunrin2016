#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void sleep() {
	//Using sleep method
	int a = 0;
	while (a < 4) {
		printf("Sleep...\n");
		Sleep(1000);
		a++;
	}
}

void gotoxy(int x, int y) {
	//Using set cursor to (x,y) method
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("*");
}

void pressed(int delay) {
	while (1) {
		Sleep(delay);
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			printf("Up\n");
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			printf("Down\n");
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			printf("Left\n");
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			printf("Right\n");
		}
		if (GetAsyncKeyState(VK_RSHIFT) & 0x8000) {
			system("cls");
		}
	}
}

void main() {
	/*
	for (int i = 0; i < 5; i++) {
		Sleep(100);
		gotoxy((i * 2), (i * 2));
	}
	*/
	pressed(50);
}