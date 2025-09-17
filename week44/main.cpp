#include <iostream>
#include "DayOfYear.h"
using namespace std;

int main() {
	DayOfYear today;
	today.setMonth(9);
	today.setDay(17);

	//cout << today.month << "/" << today.day << endl;
	cout << today.getMonth() << "/" << today.getDay()<<endl;

	DayOfYear date(11,5), date2(3), date3;
	date.output();
	date2.output();
	date3.output();

	return 0;
}