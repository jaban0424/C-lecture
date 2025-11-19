#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;

void openFile(const string& filename) {
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << "errr";
		throw runtime_error("파일을 열 수 없습니다.");
	}
	else cout << "파일 열기 성공 : "<<filename;
}


int divide(int a, int b) {
	if (b == 0) {
		throw std::runtime_error("0으로나눌수없습니다");
	}
	return a / b;
}


int main() {
	/*try {
		cout << divide(10, 0);
	}
	catch (const std::runtime_error& e) {
		cout << "예외발생: " << e.what() << endl;
	}*/
	try { openFile("nono.txt"); }
	catch (runtime_error err) {
		cout << "예외발생 : " << err.what() << endl;
	}
}
