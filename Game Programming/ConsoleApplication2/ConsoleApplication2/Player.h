#pragma once
#include "Object.h"
class Player : public Object
{
public:
	Player();
	~Player();

	void Render();
	void Move();
};

