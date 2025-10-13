#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() : Stack(10) {
	cout << "Stack() is called. size = " << this->size << endl;
}
Stack::Stack(int size) : size(size) {
	ptr = new int[size];
	top = -1;
	cout << "Stack(int size) is called. size = " << this->size << endl;
}
Stack::Stack(const Stack& st) {
	size = st.size;
	top = st.top;

	ptr = st.ptr;
	cout << "shallow copy constructor is called" << endl;

	/*ptr = new int[size];
	cout << "deep copy constructor is called" << endl;*/


}
Stack& Stack::operator=(const Stack& st) {

}
Stack::~Stack() {
	ptr = NULL;

}

void Stack::push(int el) {
	if (top < (size - 1)) { //top은 0부터, size는 1부터 세므로..
		top++;
		*(ptr + top) = el;
	}
}
void Stack::pop(int& el) { //????
	if (isEmpty == 0) {
		el = *(ptr + top);
		*(ptr + top) = -9999;
	}
}
bool Stack::isEmpty() {
	if (top == -1) return 0;
	return 1;
}
void Stack::print() {
	cout << "Stack [size=" << size << ", top=" << top << "]: ";
	for (int i = 0;i <= top;i++) cout << *(ptr + top) << " ";
	cout << endl;
}