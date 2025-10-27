#pragma once
class Power
{
	int kick;
	int punch;
public:
	void show() const;
	Power(int k = 0, int p = 0);
	Power operator+(const Power& other);
	Power operator+(int n);
	Power operator-(const Power& other);
	Power operator+=(int n);
	Power operator++();
	Power operator++(int);
	Power operator--();
	Power operator--(int);
	Power operator==(const Power& other);
};

