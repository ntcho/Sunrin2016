#include "Player.h"
#include "Dodge.h"

Player::Player(void) : Object('A')
{
	xPos = SIZE / 2;
	yPos = SIZE / 2;

	lxPos = xPos;
	lyPos = yPos;
}


Player::~Player()
{
}

void Player::Render() {
	gotoxy(lxPos * 2, lyPos);
	cout << "  ";

	gotoxy
}

void Player::Move() {
	lxPos = xPos;
	lyPos = yPos;

	if (GetAsyncKeyState(VK_UP) & 0x8000) {
		--yPos;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		++yPos;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
		--xPos;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
		++xPos;
	}
	if (GetAsyncKeyState(VK_RSHIFT) & 0x8000) {
		system("cls");
	}

	if (xPos == 0 || xPos == SIZE - 1) {
		xPos = lxPos;
	}
	if (yPos == 0 || yPos == SIZE - 1) {
		yPos = lyPos;
	}
}
