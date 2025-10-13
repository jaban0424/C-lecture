#pragma once
class Stack
{
	int* ptr;
	int size;
	int top;
public:
	Stack();
	Stack(int size);
	Stack(const Stack& st);
	Stack& operator=(const Stack& st);
	~Stack();

	void push(int el);
	void pop(int& el); //????
	bool isEmpty();
	void print();
};

