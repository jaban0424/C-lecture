#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(): Employee(), wageRate(0), hours(0) {}
HourlyEmployee::HourlyEmployee(string theName, string theSsn, double theWageRate, double theHours)
	:Employee(theName, theSsn), wageRate(theWageRate), hours(theHours) {}

void HourlyEmployee::setRate(double newWageRate) {
	wageRate = newWageRate;
}
double HourlyEmployee::getRate() const {
	return wageRate;
}

void HourlyEmployee::setHours(double hoursWorked) {
	hours = hoursWorked;
}
double HourlyEmployee::getHours() const {
	return hours;
}

void HourlyEmployee::printCheck() {
	setNetPay(hours * wageRate);
	cout << "\n-------------------------------------\n";
	cout << "Pay to the order of " << getName() << endl;
	cout << "Employee Number: " << getSsn() << endl;
	cout << "Hourly Employee. \nHours worked: " << hours
		<< " Rate: " << wageRate << "Pay : " << getNetPay();
	cout << "\n-------------------------------------\n";
}