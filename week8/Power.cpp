#include "Power.h"


//Power::Power() : Power(0,0){}  ���Ǹ� (int k=0, int p=0) ������ �̰� �ʿ����!!
Power::Power(int k, int p):kick(k),punch(p){}


Power& Power::operator=(const Power& rhs) { // ����Լ��� �Ϲ��Լ� ���� �ٸ�!! �̰� ����Լ� ���� ���� ����
	kick = rhs.kick;
	punch = rhs.punch;
	return *this;
}

Power operator+(const Power& lhs, const Power& rhs) { // �� ��ü�� ��ȯ�ϹǷ� & ���� ����
	return Power(lhs.kick + rhs.kick, lhs.punch + rhs.punch);}
Power operator+(int n, const Power& rhs) {
	return Power(rhs.kick + n, rhs.punch + n);}
Power operator+(const Power& lhs, int n) {
	return Power(lhs.kick + n, lhs.punch + n);}


Power operator-(const Power& lhs, const Power& rhs) {
	return Power(lhs.kick - rhs.kick, lhs.punch - rhs.punch);}
Power operator-(int n, const Power& rhs) {
	return Power(n - rhs.kick, n - rhs.punch);}
Power operator-(const Power& lhs, int n) {
	return Power(lhs.kick - n, lhs.punch - n);}


//Power& operator+=(Power& lhs, const Power& rhs) {
//	return Power(lhs.kick + rhs.kick, lhs.punch + rhs.punch);} 
Power& operator+=(Power& lhs, const Power& rhs) { // ���� �μ� ���� �ϰ� ��ȯ�� �ٸ��� �ϸ� ����. (������ �� ����. ���ε� �����)
	lhs.kick += rhs.kick;
	lhs.punch += rhs.punch;
	return lhs; }
bool operator==(const Power& lhs, const Power& rhs) {
	return (lhs.kick == rhs.kick) && (lhs.punch == rhs.punch); }


Power& operator++(Power& op) {
	op.kick++;
	op.punch++;
	return op;
}
Power operator++(Power& op, int) {
	//return Power(op.kick++, op.punch++); �̷��� �ϸ� �ȵǳ�
	Power temp = op;
	++op.kick;
	++op.punch;
	return temp;
}


Power& operator--(Power& op) {
	//return Power(op.kick--, op.punch--); lvalue�� �����μ� ��ȯ�Ϸ��ؼ� �ȴ�.
	op.kick--;
	op.punch--;
	return op;
}
Power operator--(Power& op, int) {
	Power temp = op;
	--op.kick;
	--op.punch;
	return op;
}


ostream& operator<<(ostream& os, const Power& p) {
	os << "(" << p.kick << " ," << p.punch << ")";
	return os;
}
istream& operator>>(istream& is, Power& p) {
	cout << "Enter kick and punch : ";
	is >> p.kick >> p.punch;
	//cout << "�Էµ� d : " << p;
	return is;
}
