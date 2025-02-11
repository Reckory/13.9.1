#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string usr1 = "����";
	string usr2 = "������";
	string usr3 = "�����";
	string usr4 = "����";
	string usr5 = "����";
//	string usr6 = "����";

	Graph users;

	users.addUser(usr1);
	users.addUser(usr2);
	users.addUser(usr3);
	users.addUser(usr4);
	users.addUser(usr5);
//	users.addUser(usr6);

	users.addEdge(usr1, usr2, 1);
	users.addEdge(usr2, usr3, 1);
	users.addEdge(usr3, usr4, 1);
	users.addEdge(usr4, usr5, 1);
//	users.addEdge(usr5, usr6, 1);

	users.showFriends(3);

	return 0;
}