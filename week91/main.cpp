#include <iostream>
#include "Point.h"
#include "ColorPoint.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
using namespace std;


//class A {
//public:
//	A() { cout << "생성자 A" << endl; }
//	~A() { cout << "소멸자 A" << endl; }
//};
//class B : public A {
//public:
//	B() { cout << "생성자 B" << endl; }
//	~B() { cout << "소멸자 B" << endl; }
//};
//class C : public B {
//public:
//	C() { cout << "생성자 C" << endl; }
//	~C() { cout << "소멸자 C" << endl; }
//};


class A {
public:
	A() { cout << "기본A" << endl; } // B는 A 상속받고, 따로 A 생성자 명시 없으니 기본 호출하는데, 
	// 기본막고 일반만 정의하면 기본 정의 안돼서 B에서 오류난다.
	A(int x) { cout << "일반A : "<<x<< endl; }
};

class B : public A {
public:
	B() {	cout << "기본B" << endl;	}
	B(int x) :A(x+3) { cout << "일반B : "<<x << endl; } // 일반생성자를 명시했으므로 기본 말고 일반A호출
};

int main() {
	//ColorPoint cp; // 파생 클래스의 객체 생성
	//cp.set(3, 4); // 기반 클래스의 멤버 호출
	//cp.setColor("Red"); // 파생 클래스의 멤버 호출
	//cp.showColorPoint(); // 파생 클래스의 멤버 호출






	//Point p; // 기반 클래스의 객체 생성
	//p.set(2, 3); // ②
	////p.x = 5; // ③
	////p.y = 5; // ④
	//p.showPoint();
	//ColorPoint cp; // 파생 클래스의 객체 생성
	////cp.x = 10; // ⑤
	////cp.y = 10; // ⑥
	//cp.set(3, 4);
	//cp.setColor("Red");
	//cp.showColorPoint();
	//ColorPoint cp2;
	//cp2.set(3, 4);
	//cp2.setColor("Red");
	//cout << ((cp.equals(cp2)) ? "true" : "false"); // ⑦






	//C c; // c 생성
	//return 0; // c 소멸






	//B b(5); return 0;





	Employee e1("A", "1");
	Employee e2;
	e1.printCheck();
	e2.printCheck();
	HourlyEmployee h1("A", "1", 10, 54);
	HourlyEmployee h2;
	h1.printCheck();
	h2.printCheck();
	SalariedEmployee s1("B", "2", 160);
	SalariedEmployee s2;
	s1.printCheck();
	s2.printCheck();
	Employee JaneE;
	HourlyEmployee SallyH;
	JaneE.printCheck();
	SallyH.printCheck();
	SallyH.Employee::printCheck();
	return 0;

}



