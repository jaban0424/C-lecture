#include "Point.h"

void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

void Point::set(int x, int y) { this->x = x; this->y = y; }