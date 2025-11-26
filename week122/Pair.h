#pragma once
template <class T> // template <typename T>
class Pair {
public:
	Pair();
	Pair(T firstValue, T secondValue);
	void setFirst(T newValue);
	void setSecond(T newValue);
	T getFirst() const;
	T getSecond() const;
	T addUp() const;
private:
	T first;
	T second;
};

template <class T>
Pair<T>::Pair() {}
template <class T>
Pair<T>::Pair(T firstValue, T secondValue) : first(firstValue), second(secondValue) {}
template <class T>
void Pair<T>::setFirst(T newValue) { first = newValue; }
template <class T>
void Pair<T>::setSecond(T newValue) { second = newValue; }
template <class T>
T Pair<T>::getFirst() const { return first; }
template <class T>
T Pair<T>::getSecond() const { return second; }
template <class T>
T Pair<T>::addUp() const { return first + second; } // 두 값을 더해서 반환