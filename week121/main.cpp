#include <iostream>
using namespace std;
#include "Circle.h"
template <class T>
T minimum(T a, T b) {
	if (a < b)
		return a;
	else return b;
}

int main() {
	// 기본 타입 예제
	int x = 10, y = 20;
	cout << "minimum(10, 20) = " << minimum(x, y) << endl;
	double a = 3.14, b = 2.71;
	cout << "minimum(3.14, 2.71) = " << minimum(a, b) << endl;
	char c1 = 'A', c2 = 'C';
	cout << "minimum('A', 'C') = " << minimum(c1, c2) << endl;
	// string 예제
	string s1 = "apple", s2 = "banana";
	cout << "minimum(\"apple\", \"banana\") = " << minimum(s1, s2) << endl;
	// 사용자 정의 타입 예제
	Circle donut(5);
	Circle pizza(20);
	Circle smaller = minimum(donut, pizza);
	cout << "작은 원의 반지름 = " << smaller.getRadius() << endl;
}