#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(int r) : radius(r) { cout << "circle(r) called" << endl; }

Circle::Circle() : radius(1) { cout << "circle() called" << endl; }

double Circle::getA() {
	cout << "getA() called" << endl;
	return 3.141592 * radius * radius;
}

void Circle::setR(int r) {
	radius = r;
}
