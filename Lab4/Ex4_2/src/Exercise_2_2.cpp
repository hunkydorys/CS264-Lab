//============================================================================
// Name        : Exercise_2_2.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {

	Complex a(5,8);
	Complex b(1,4);
    //using the add function
	Complex c = a.Add(b);
	c.print();
	//using the multiply function
	c = a.Multiply(b);
	c.print();
	//using the subtract function
	c= a.Subtract(b);
	c.print();

	return 0;
}
