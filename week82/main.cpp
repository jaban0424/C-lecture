#include "Money.h"
#include <iostream>
using namespace std;

int main() {
	//Money m1(10, 20), m2(30, 40), m3, m4;
	//m3 = 5 + m1;
	//cout << 5 << " + " << "m1 ( "; m1.show(); cout << " ) = "; m3.show(); cout << endl;
	//m4 = m1 + m2; // m4 = operator+(m1,m2);
	//cout << "m1 ( "; m1.show(); cout << " ) + m2 ( "; m2.show(); cout << " ) = "; m4.show(); cout << endl;
	//if (m4 == Money(40, 60)) { // operator==(m4,Money(0,0))
	//	cout << "m4 == "; m4.show(); cout << endl;
	//}

	/*cout << m1 << endl << m2 << endl;

	cout << "Enter two numbers : ";
	cin >> m3;
	cout << m3 << endl;*/

	Money moneyforfriend1(10, 10), moneyforfriend2(30, 30);
	cout << moneyforfriend1 + moneyforfriend2;



	return 0;
}