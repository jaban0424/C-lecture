#include <iostream>
using namespace std;
#include "DiscountSale.h"
//class Base {
//public:
//	void show() { cout << "Base" << endl; }
//};
//class Derived : public Base {
//public:
//	void show() { cout << "Derived" << endl; }
//};

int main() {
	//Derived d, * pDer;
	//pDer = &d;
	//pDer->show(); // 출력은?
	//Base* pBase;
	//pBase = pDer; // 업캐스팅
	//pBase->show(); //출력은?
	//return 0;

	Sale s(10);
	DiscountSale d(11, 10);

	cout << "sale price : " << s.getPrice() << endl;
	cout << "discountsale price and rate : " << d.getPrice() << "," << d.getDiscount() << "%" << endl;
	cout << "saving is " << d.savings(s) << endl;

	return 0;


}