#pragma once
class Circle{
	int r;
public:
	Circle(int radius = 1) : r(radius) {}

	int getRadius() const { return r; }

	bool operator<(const Circle& other) {
		if ((this->r) < other.r)
			return 1;
		else 0;
	}
};

