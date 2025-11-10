#pragma once
#include "Sale.h"
class DiscountSale : public Sale
{
public:
	DiscountSale();
	DiscountSale(double thePrice, double theDiscount);
	double getDiscount() const;
	void setDiscount(double newDiscount);
	double bill() const override;
private:
	double discount;
};

