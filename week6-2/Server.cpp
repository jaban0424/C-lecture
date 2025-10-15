#include "Server.h"
#include <iostream>
using namespace std;

int Server::turn = 0;
int Server::lastServed = 0;
bool Server::nowOpen = 1;

Server::Server(char letterName) : name(letterName) {
	cout << "Server(" << letterName << ") is called." << endl;
}

void Server::serveOne() {
	cout << name << ".ServeOne() is called." << endl;
	if (Server::nowOpen && Server::lastServed < Server::turn)
		cout << "Server " << name << " now serving " << ++Server::lastServed << endl;
	if (Server::lastServed >= Server::turn)
		nowOpen = 0;
}

int Server::getTurn() { //앞에 static 안 붙여도 됨
	cout << "getTurn() is called." << endl;
	return ++Server::turn; //앞에 Server:: 안 붙이면? 문제 안 생기는데 나중에 지역변수와 중복될 수 있고, 그게 아니더라도 정적변수임을 알리기 위해
}
bool Server::stillOpen() {
	cout << "stillOpen() is called." << endl;
	return Server::nowOpen;
}