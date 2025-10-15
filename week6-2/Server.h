#pragma once
class Server
{
	char name;

	static int turn;
	static int lastServed;
	static bool nowOpen;
public:
	Server(char letterName);

	void serveOne();

	static int getTurn();
	static bool stillOpen();
};

