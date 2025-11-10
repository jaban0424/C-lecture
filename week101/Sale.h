#pragma once
class Sale
{
public:
	Sale();
	Sale(double thePrice);
	double getPrice() const;
	virtual double bill() const; // virtual은 컴파일 시 바인딩을 하지 않고,
	//런타임에 실제 클래스(선언 클래스 말고)를 보고 판단해 바인딩(동적)하도록 하는, "홀드하는 기능"
	double savings(Sale& other) const;
private:
	double price;
};

