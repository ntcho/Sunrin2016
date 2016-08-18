#pragma once

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

#define SIZE 20
#define BULLET 10

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#define PLAYERCHAR 'A'
#define BULLETCHAR '*'

#define FPS 30

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}