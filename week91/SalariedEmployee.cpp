#include "SalariedEmployee.h"



SalariedEmployee::SalariedEmployee() :Employee(), salary(0){}
SalariedEmployee::SalariedEmployee(string theName, string theSsn, double theWeeklySalary)
	:Employee(theName, theSsn), salary(theWeeklySalary) { }

double SalariedEmployee::getSalary() const {
	return salary;
}
void SalariedEmployee::setSalary(double newSalary) {
	salary = newSalary;
}
void SalariedEmployee::printCheck() {
	setNetPay(4 * salary);
	cout << "\n-------------------------------------\n";
	cout << "Pay to the order of " << getName() << endl;
	cout << "The sum of" << getSalary() << "Dollars\n";
		cout << "Employee Number: " << getSsn() << endl;
	cout << "Salaried Employee. Regular Pay: " << getNetPay() << endl;
	cout << "\n-------------------------------------\n";
}