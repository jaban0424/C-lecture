#include "Money.h"
#include <iostream>
using namespace std;


Money::Money(int d, int c) : dollars(d), cents(c) {}

void Money::show() const {
	cout << "$" << dollars << ".";
	if (cents < 10) cout << "0";
	cout << cents;
}

int Money::getDollars() const{
	return dollars;
}

int Money::getCents() const {
	return cents;
}

void Money::setDollars(int d) {
	dollars = d;

}

void Money::setCents(int c) {
	cents = c;
}

Money operator+(int lhs, const Money& rhs) {
	int totalDollars = lhs + rhs.getDollars(); // Money의 private 멤버라서, 클래스 외부 함수가 접근 못함.
	int totalCents = lhs + rhs.getCents(); // Money의 private 멤버
	// 센트가 100 이상이면 달러로 환산
	if (totalCents >= 100) {
		totalDollars += totalCents / 100;
		totalCents %= 100;
	}
	return Money(totalDollars, totalCents);
}

Money operator+(const Money& m1, const Money& m2) { 
	//int newD = m1.getDollars() + m2.getDollars();
	//int newC = m1.getCents() + m2.getCents(); //<-friend 없을 때 !!!!

	int newD = m1.dollars + m2.dollars; //<- friend 함수라서 내부변수 사용 가능.
	int newC = m1.cents + m2.cents;
	return Money(newD, newC);

}
bool operator==(const Money& m1, const Money& m2) {
	//if (m1.getDollars() == m2.getDollars() && m1.getCents() == m2.getCents())
	if (m1.getDollars() == m2.getDollars() && m1.getCents() == m2.getCents())
		return 1;
	return 0;
}

ostream& operator<< (ostream& os, const Money& m) {
	os << "$" << m.getDollars() << "." << m.getCents();
	return os;
}
istream& operator>> (istream& is, Money& m) {
	int d, c;
	is >> d >> c;
	m.setDollars(d);
	m.setCents(c);
	return is;
}