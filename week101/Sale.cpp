#include "Sale.h"
Sale::Sale():Sale(0){};
Sale::Sale(double thePrice) : price(thePrice) {}
double Sale::getPrice() const {
	return price;
}
double Sale::bill() const {
	return price;
}
double Sale::savings(Sale& other) const {
	return bill() - other.bill(); // 이렇게 하면 Sale의 bill을 바인딩한다!!!
}