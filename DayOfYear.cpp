#include "DayOfYear.h"
#include <iostream>
using namespace std;

void DayOfYear::setMonth(int m){
	month = m;
}

void DayOfYear::setDay(int d) {
	day = d;
}

int DayOfYear::getMonth() {
	return month;
}

int DayOfYear::getDay() {
	return day;
}

/*
DayOfYear::DayOfYear(int mv, int dv)
	:month(mv), day(dv) {} // ����,�ݷ����� member(value)�ϸ� �ٷ� ����.
	//month=mv;
	//day=dv;

DayOfYear::DayOfYear(int mv)
	:month(mv)
{
	day = 1;
}

DayOfYear::DayOfYear() {
	month = 1;
	day = 1;
}

void DayOfYear::output() {
	cout << month << "/" << day << endl;
}
*/