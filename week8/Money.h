#pragma once
class Money
{
	int dollars;
	int cents;
public:
	Money(int d = 0, int c = 0);
	Money operator+(const Money& other) const;
	Money operator-(const Money& other) const;
	bool operator==(const Money& other) const;
	Money& operator++();
	Money operator++(int); // °ýÈ£ ¾È int ¹«½¼ ÀÇ¹Ì
	void show() const;
};

