#include <iostream>
#include <string>
using namespace std;
#include "Pair.h"
#include "MyVector.h"
//template <typename T>
//class Box {
//private:
//	T value;
//public:
//	Box(T v) : value(v) {} // 积己磊
//	T get() { return value; } // value甫 馆券
//};
//int main() {
//	//Box<int> a(10); // T=int 按眉 积己
//	//Box<string> b("Hello"); // T=string 按眉 积己
//	//cout << a.get() << endl;
//	//cout << b.get() << endl;
//	Pair<int> intPair(10, 20);
//	cout << "intPair: " << intPair.getFirst() << ", " << intPair.getSecond() << endl;
//	cout << "addUp returns " << intPair.addUp() << endl;
//	intPair.setFirst(30);
//	intPair.setSecond(40);
//	cout << "intPair after set: " << intPair.getFirst() << ", " << intPair.getSecond() << endl;
//	cout << "addUp returns " << intPair.addUp() << endl << endl;
//	Pair<double> doublePair(3.14, 2.71);
//	cout << "doublePair: " << doublePair.getFirst() << ", " << doublePair.getSecond() << endl;
//	cout << "addUp returns " << doublePair.addUp() << endl;
//	doublePair.setFirst(1.23);
//	doublePair.setSecond(4.56);
//	cout << "doublePair after set: " << doublePair.getFirst() << ", " << doublePair.getSecond() << endl;
//	cout << "addUp returns " << doublePair.addUp() << endl << endl;
//	Pair<string> stringPair("Hello", "World");
//	cout << "stringPair: " << stringPair.getFirst() << ", " << stringPair.getSecond() << endl;
//	cout << "addUp returns " << stringPair.addUp() << endl;
//	stringPair.setFirst("Goodbye");
//	stringPair.setSecond("Moon");
//	cout << "stringPair after set: " << stringPair.getFirst() << ", " << stringPair.getSecond() << endl;
//	cout << "addUp returns " << stringPair.addUp() << endl << endl;
//
//}

int main() {
	MyVector<int> v;
	v.push_back(1); // sz=1, cap=2
	v.push_back(2); // sz=2, cap=2
	v.push_back(3); // sz=3, cap=4 (resize 惯积)
	for (int i = 0; i < v.size();i++)
		cout << v[i] << " ";
	cout << endl;
	v[0] = 100;
	for (int i = 0; i < v.size();i++)
		cout << v[i] << " ";
	cout << endl;
}