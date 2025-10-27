#include "Money.h"
#include <iostream>
using namespace std;

int main() {
	Money m1(5, 75);
	Money m2(3, 90);

	Money sum = m1 + m2;
	Money diff = m1 - m2;

	cout << "sum = "; sum.show(); cout << endl;
	cout << "diff = "; diff.show(); cout << endl;

	cout << "(m1==m2)? : ";
	if (m1 == m2) cout << "true" << endl;
	else cout << "false" << endl;

	++m1;
	Money m3 = m2++;

	cout << "m1 = "; m1.show(); cout << endl;
	cout << "m2 = "; m2.show(); cout << endl;
	cout << "m3 = "; m3.show(); cout << endl;


	return 0;
}