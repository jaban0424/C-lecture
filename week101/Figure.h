#pragma once
#include <iostream>
using namespace std;
class Figure
{
public:
	virtual void draw();
	void center();
	virtual void getPosition(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
private:
	int x, y;
};

