#pragma once
class Object
{
public:
	Object(wchar_t shape);
	~Object(void);

	int xPos;
	int yPos;

	int lxPos;
	int lyPos;

	wchar_t shape;

	virtual void Render();
	virtual void Move();
};

