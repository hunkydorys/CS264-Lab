//============================================================================
// Name        : Ex6_2.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


template <typename T>
void print(const T* a, const int len)
{
	for(int i =0;i<len;i++)
	{
		cout<< a[i]<<endl;
	}
}

int main() {

	int length = 10;
    int * ptr = new int[length];

    for(int i=0;i<length;i++)
    {
    	ptr[i]= i;

    }
    print(ptr,length);
	return 0;
}
