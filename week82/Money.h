// Money.h
#include <iostream>
using namespace std;


class Money
{
	int dollars;
	int cents;
public:
	Money(int d = 0, int c = 0); // 생성자
	int getDollars() const; // 총 금액 중 달러에 해당하는 부분을 정수로 반환
	int getCents() const; // 총 금액 중 센트에 해당하는 부분을 정수로 반환
	void setDollars(int d); // 총 금액 중 달러에 해당하는 부분을 지정
	void setCents(int c); // 총 금액 중 센트에 해당하는 부분을 지정
	void show() const; // 출력 함수
	friend Money operator+(const Money& m1, const Money& m2);
};

Money operator+(int lhs, const Money& rhs);

//Money operator+(const Money& m1, const Money& m2); // 이렇게 할바엔 그냥 클래스로 정의하지 왜 굳이 인수를 더 받게 일반함수로 하는지 의문.
bool operator==(const Money& m1, const Money& m2);

ostream& operator<< (ostream& os, const Money& m); // 함수 반환 타입, 인수에 왜 & 붙이는지. 그리고 const 쓰는 이유 공부
istream& operator>> (istream& is, Money& m); // 여긴 왜 const 없음
