#include "Circle.h"
#include <iostream>
using namespace std;
const double PI = 3.141592;

Circle::Circle() : radius(1){
	cout << "Circle() is called, r = "<<radius << endl;
}
Circle::Circle(int radius) : radius(radius) { 
	cout << "Circle(int r) is called r = " << radius << "" << endl;
}
Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "assignment is called" << endl;
}
Circle& Circle::operator=(const Circle& R) {
	cout << "op= is called" << endl;
	if (this == &R) return *this;
	this->radius = R.radius;
	return *this;
}
Circle::~Circle(){
	cout << "~Circle() is called" << endl;
}
double Circle::getA() {
	return (this->radius) * (this->radius) * PI;
	cout << "getA() is called" << endl;
}

Circle Circle::f_value(Circle c) {
	return c;
}
Circle& Circle::f_value(Circle& ref_c) {
	return ref_c;
}
Circle* Circle::f_ptr(Circle * ptr_c) {
	return ptr_c;
}