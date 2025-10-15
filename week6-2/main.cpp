
#include "Server.h"
#include <iostream>
using namespace std;

int sum(int a, int b) {
	//return (b - a + 1) * (a + b) / 2;
	int temp = 0;
	for (int i = a; i <= b;i++) {
		temp += i;
	}
	return temp;
}

int sum(int a) {
	//return a * (a + 1) / 2;
	return sum(0, a);
}

int main() {
	//Server s1('A'), s2('B');
	//int number, count;
	//do {
	//	cout << "How many in your group? : ";
	//	cin >> number;
	//	cout << "Your turns are : ";
	//	for (count = 0;count < number;count++)
	//		cout << Server::getTurn(); // 앞에 꼭 붙여야함!!
	//	cout << endl;
	//	s1.serveOne();
	//	s2.serveOne();
	//} while (Server::stillOpen());
	//cout << "Closed\n";
	//return 0;
	cout << sum(3, 5) << endl << sum(3) << endl << sum(100) << endl;

}