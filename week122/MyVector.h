#pragma once
template <class T>
class MyVector
{
public:
	int sz=0;
	int cap=2;
	T* data = new T[cap]; //생성자로 할것
	int size();
	void push_back(T t);
	T& operator[](int idx);
private:
	void resize();

};

template <class T>
int MyVector<T>::size() { return sz; }

template <class T>
void MyVector<T>::push_back(T t) {
	if (sz == cap)
		resize();
	*(data + sz) = t;
	sz++;
}
template <class T>
void MyVector<T>::resize() {
	T* temp = new T[cap*=2];
	for (int i = 0; i < sz; i++)
		temp[i] = data[i];
	delete[] data;
	data = temp;
}

template <class T>
T& MyVector<T>::operator[](int idx){ // 이거 생성자가 아니라 그냥 인덱스였다. 생성자는 오버로딩 불가능임.
	return data[idx];
} /// 참조로 반환해야함. L value가 되어야함. 

