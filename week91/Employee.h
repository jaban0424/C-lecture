#pragma once
#include <iostream>
#include <string.h> // 이거 기억!!
using namespace std;

class Employee
{
public:
	Employee();
	Employee(string theName, string Ssn);

	string getName() const;
	string getSsn() const;
	double getNetPay() const;

	void setName(string newName);
	void setSsn(string newSsn);
	void setNetPay(double newNetPay);

	void printCheck() const;

private:
	string name;
	string ssn;
	double netPay;
};

