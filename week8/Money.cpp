#include "Money.h"
#include <cmath>
#include <iostream>
using namespace std;
Money::Money(int d, int c) : dollars(d), cents(c) {}
Money Money::operator+(const Money& other) const {
	int tD = dollars + other.dollars;
	int tC = cents + other.cents;

	if (tC >= 100) {
		tD += tC / 100;
		tC %= 100;
	}
	return Money(tD, tC); }
Money Money::operator-(const Money& other) const {
	int tD = dollars - other.dollars;
	int tC = cents - other.cents;

	if (tC < 0) {
		//cout << floor(static_cast<double>(tC) / 100.0);
		tD += floor(static_cast<double>(tC) / 100.0);
		tC -= floor(static_cast<double>(tC) / 100.0)*100;
	}
	return Money(tD, tC);
}
bool Money::operator==(const Money& other) const {
	if (dollars == other.dollars && cents == other.cents)
		return 1;
	return 0;
}

Money& Money::operator++() {
	dollars += 1;
	return *this;
}

Money Money::operator++(int) {
	Money temp = *this;
	dollars += 1;
	return temp;
}


void Money::show() const {
	cout << "$" << dollars << ".";
	if (cents < 10) cout << "0";
	cout << cents;
}