#include "DiscountSale.h"
DiscountSale::DiscountSale() :DiscountSale(0,0) {}
DiscountSale::DiscountSale(double thePrice, double theDiscount) : Sale(thePrice), discount(theDiscount) {} //price 접근 안됨!!!
double DiscountSale::getDiscount() const {
	return discount;
}
void DiscountSale::setDiscount(double newDiscount) {
	discount = newDiscount;
}
double DiscountSale::bill() const {
	return getPrice() * (100 - discount) / 100;  // price 왜 바로 사용 못함?
}

