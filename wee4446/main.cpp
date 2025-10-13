#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle donut(15);
	cout << "donut : " << donut.getA() << endl << endl;

	/*Circle* p = &donut;

	cout << (*p).getA() << endl;
	cout << p->getA() << endl;*/

	/*Circle cir1(donut);
	cout << "cir1 : " << donut.getA() << endl << endl;

	Circle cir2(cir1);
	cout << "cir2 : " << donut.getA() << endl << endl;

	Circle cir3;
	cir3 = cir2;
	cout << "cir3 : " << donut.getA() << endl << endl;*/

	/*Circle cir4 = f_value(donut);
	if (&cir4 == &donut) cout << "cir4 same address" << endl << endl;
	cout << endl;

	Circle& ref = f_ref(donut);*/


	return 0;

}