#pragma once // 이거 없으면 여러번 정의했다고 오류 뜸!!!!
#include <iostream>
using namespace std;

class Point { // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
protected:
	int x, y; //한 점 (x,y) 좌표값
public:
	void set(int x, int y);
	void showPoint();
};