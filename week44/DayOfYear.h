#pragma once
class DayOfYear
{
	int month;
	int day;
public:
	DayOfYear(int mv, int dv);
	DayOfYear(int mv);
	DayOfYear();

	void output();

	int getMonth();
	int getDay();

	void setMonth(int m);
	void setDay(int d);
};

