//============================================================================
// Name        : Ex7_1.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Client.h"
#include "Log.h"
using namespace std;

int main()
{

	cout << "how many Clients would you like to have"<<endl;
	int  num;
	cin >> num;
	string name;
	Client **client = new Client*[num];
	for(int i=0;i<num;i++)
	{
		cout<<"Enter  clients name" <<endl;
		cin >> name;
		client[i]=new Client(name);
	}

	for(int i=0;i<num;i++)
	{
		delete client[i];
	}
	delete[] client;


}
