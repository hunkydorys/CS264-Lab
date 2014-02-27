//============================================================================
// Name        : Ex6_3.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T> &vec)
{
	typename vector<T>::iterator it;
	for(it = vec.begin();it<vec.end();++it)
	{
		cout<< *it <<endl;

	}
	cout <<endl;
}

int main() {
	vector<double> vec(10,100);
	print(vec);
	return 0;
}
