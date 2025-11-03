#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee()
	:name("No Name Yet"), ssn("No Number Yet"), netPay(0) { }

Employee::Employee(string theName, string theSsn)
	:name(theName), ssn(theSsn) /*,netPay()*/ { } // netpay는?????

string Employee::getName() const {
	return name;
}

string Employee::getSsn() const {
	return ssn;
}

double Employee::getNetPay() const {
	return netPay;
}

void Employee::setName(string newName) {   name = newName; }
//:name(newName){ } // <- 이거 안됨!! 생성자에서만 쓸 수 있는 방법.
void Employee::setSsn(string newSsn)  { 	ssn = newSsn; }

void Employee::setNetPay(double newNetPay) {	netPay = newNetPay; }

void Employee::printCheck() const {	cout << "ERROR:printCheck" << endl; }
