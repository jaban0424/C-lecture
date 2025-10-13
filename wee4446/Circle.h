#pragma once
class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	Circle(const Circle& c);
	Circle& operator=(const Circle& c);
	~Circle();
	double getA();

	Circle f_value(Circle c);
	Circle& f_value(Circle& ref_c);
	Circle* f_ptr(Circle* ptr_c);
};

