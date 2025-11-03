#include "ColorPoint.h"

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // 기반 클래스의 public 멤버 호출
	// cout << x;
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color) // ①
		return true;
	else
		return false;
}
