#include <queue>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	/*queue<int> q;
	
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "Front:" << q.front() << endl;
	cout << "Back:" << q.back() << endl;
	q.pop();
	cout << "Front after pop: " << q.front() << endl;

	while (!q.empty()) {
		cout << q.front() << "";
		q.pop();

		cout << endl;*/





	/*priority_queue<int> pq;
	pq.push(30);
	pq.push(10);
	pq.push(50);
	pq.push(20);

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;*/




	vector<int> v = { 10, 20, 30, 40, 50 };

	// reverse_iterator A|8 vector<int> :: reverse_iterator
	for (auto rit = v.rbegin(); rit != v.rend(); ++rit) 
		cout << *rit << ""; // rbegin은 애초에 반환타입이 일반적 iterator가 아니라 ++하면 뒤로 간다!!



	v = { 1,1,2,3,3,4,5,6,6,7,7,4,3,2,4,5,9 };

	auto it = find(v.begin(), v.end(), 4);
	if (it != v.end())
		cout << "found" << endl;

	cout << "counted as " << count(v.begin(), v.end(), 4)<<endl;
	cout << "maximum is  " << *max_element(v.begin(), v.end())<<endl; // iterator를 반환하므로 *를 붙여야함.
	cout << "sum is " << accumulate(v.begin(), v.end(), 0)<<endl;

	sort(v.begin(), v.end());
	cout << "sorted as : ";
	for (int x : v) cout << x << " ";

	sort(v.begin(), v.end(),greater<int>());
	cout << "\ndescend sorted as : ";
	for (int x : v) cout << x << " ";

	reverse(v.begin(), v.end());
	cout << "\nreverse : ";
	for (int x : v) cout << x << " ";
	cout<< endl << endl;

	v = { 7, 3, 9, 1, 8, 1, 8, 9, 9 };
	cout << "초기: ";
	for (int x : v) cout << x << " ";
	cout << endl;
	auto last = remove(v.begin(), v.end(), 9);
	//cout << "@@@@@" << *last; remove는 특정값 골라 지우고 지운만큼 나머지 원소 앞으로 민다. 그리고 쓰레기값(기존값) 보관됨. last라는 iterator 반환하고, 그건 쓰레기값의 첫위치 가리킴.

	cout << "remove 실행 후: ";
	for (int x : v) cout << x << "";
	cout << endl;

	v.erase(last, v.end());
	cout << "삭제 후: ";
	for (int x : v) cout << x << "";
	cout << endl << endl;

	// v.erase(remove(v.begin(), v.end(), 9), v.end()); 실제 이 패턴으로 사용



	/////////////////////////////////////////////////////////////

	v = { 1, 2, 1, 1, 3, 3, 3, 4, 5, 4 };
	cout << "초기: ";
	for (int x : v) cout << x << ""; cout << endl;

	/*sort(v.begin(), v.end());
	cout << "정렬: ";
	for (int x : v) cout << x << ""; cout << endl;*/ //정렬을 하지 않으면 인접하지 않은 중복값들은 제거되지 않음

	last = unique(v.begin(), v.end()); // 중복값 없애고 쓰레기값의 첫 위치를 가리킨다
	cout << "unique 실행 후: ";
	for (int x : v) cout << x << ""; cout << endl;

	v.erase(last, v.end());
	cout << "중복 삭제 후:";
	for (int x : v) cout << x << " "; cout << endl;

	// v.erase(unique(v.begin(), v.end()), v.end());

	cout << endl << endl;












	//////////////////////////////////////////////

	set<int> A = { 1, 3, 5, 7 };
	set<int> B = { 3, 4, 5, 6 };

	vector<int> result;
	result.resize(A.size() + B.size());
	auto itt = set_union(A.begin(), A.end(), B.begin(), B.end(), result.begin());
	//cout << "@@@@@@@" << *(itt+1); 쓰레기값 시작되는 위치를 가리키고 다 0으로 되어있음. 
	result.resize(itt - result.begin()); // 쓰레기 시작위치 - 시작위치 = 원소개수

	cout << "합집합: ";
	for (int x : result) cout << x << " ";
	cout << endl;

	result.resize(min(A.size(), B.size()));

	// 최대 크기는 작은 쪽
	it = set_intersection(A.begin(), A.end(), B.begin(), B.end(), result.begin());
	result.resize(it - result.begin());

	cout << "교집합: ";
	for (int x : result) cout << x << " ";
	cout << endl;

	result.resize(A.size());
	it = set_difference(A.begin(), A.end(), B.begin(), B.end(), result.begin());
	result.resize(it - result.begin());

	cout << "차집합 A-B: ";
	for (int x : result) cout << x << " ";
	cout << endl;

	return 0;
}
