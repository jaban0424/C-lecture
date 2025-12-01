#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

//int main() {
//	vector<int> v;
//	for (int i = 1; i <= 4; i++)
//		v.push_back(i);
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int> ::iterator it;
//	it = v.begin();
//
//	it++;
//	int n = *it;
//	cout << "n=" << n << endl;
//
//	n = n * 2;
//	*it = n;
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//	it = v.erase(it);
//
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//
//	it = v.end();
//	it--;
//	n = *it;
//	cout << "n =" << n << endl;
//}


//int main() {
//	map<string, int> scores;
//	scores.insert(make_pair("Charlie", 95));
//	scores.insert(make_pair("Alice", 90));
//	scores.insert(make_pair("Bob", 85));
//
//	// insert 또는 update
//	// 기존 key는 update
//
//	scores["David"] = 88;
//	scores["Alice"]=92;
//
//	cout << "총 학생 수: " << scores.size() << endl;
//
//	map<string, int> ::iterator it;
//
//	for (it = scores.begin(); it != scores.end(); ++it) {
//		cout << it->first << " : " << it->second << endl;
//	}
//
//	// 키로 값 알아내기
//	int num = scores["David"];
//	cout << "David 점수: " << num << endl;
//
//	it = scores.find("Bob");
//	if (it != scores.end()) {
//		cout << "찾았다! Bob 점수: " << it->second << endl;
//		scores.erase(it);
//
//		int num = scores["David"];
//
//	}
//
//	if (scores.find("Bob") == scores.end()) {
//		cout << "Bob 삭제 완료" << endl;
//	}
//	for (auto& p : scores) {
//	cout << p.first << " :" << p.second << endl;
//
//	}
//
//		// 모든 원소 출력
//}


int main() {
	list<int> lst = { 1, 2, 4, 5 };
	auto it = lst.begin();
	++it;
	++it;
	lst.insert(it, 3);
	for (auto x : lst)
		cout << x << " "; //축약형으로는 iterator 사용 불가.
	//iterator는 포인터가 아니다. 메모리가 연속이 아니기 때문에. 따라서 포인터처럼 동작하는 객체를 만든 것.
}
