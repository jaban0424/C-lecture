#pragma once
#include <iostream>
using namespace std;
#include "Point.h"
	
class ColorPoint : public Point { // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint
	string color; // 점의 색 표현
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};

