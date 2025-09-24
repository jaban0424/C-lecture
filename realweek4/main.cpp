#include <iostream>
#include "Circle.h"
using namespace std;

void sneaky(int* temp);
bool eqArr(int* a, int* b, int size);

int main() {
	/*
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++) {
		*(n+i) = 3 * i;
	}

	p = n;
	for (i = 0; i < 10; i++) {
		cout << *(n + i) << ' ';
	}
	cout << endl;
	for (i = 0; i < 10; i++) {
		*p += 2;
		p++;
	}

	for (i = 0; i < 10; i++) {
		cout << *(n + i) << ' ';
	}
	cout << endl;
	*/

	/*int n = 11;
	int* p;

	//p=&n;
	p = &n+8;
	//*p = 77;
	cout << "Before *p = " << *p << endl;

	sneaky(p);

	cout << "After *p = " << *p << endl;
	*/

	/*
	int a[] = {1,2,3,4,5};
	int b[] = { 1,2,3,4,56 };
	if(eqArr(a,b,5))
		cout << "eq" << endl;
	else
		cout << "not eq" << endl;
		*/


	/*
	Circle donut;
	Circle pizza(30);

	cout << donut.getA() << endl;

	Circle* p;
	p = &donut;
	cout << p->getA() << endl;
	cout << (*p).getA() << endl;

	p = &pizza;
	cout << p->getA() << endl;
	cout << (*p).getA() << endl;
	*/

	Circle circleArray[3] = { {10},{20} };

	circleArray[2].setR(30);

	for (int i = 0; i < 3; i++) {
		cout << "circle" << i << " : " << circleArray[i].getA() << endl;
	}

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << "circle" << i << " : " << (p + i)->getA() << endl;
	}

}

void sneaky(int* temp) {
	*temp = 99;
	cout << "in func, *temp = " << *temp << endl;
}

bool eqArr(int* a, int* b, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i])
			return false;
	}
	return true;
}
