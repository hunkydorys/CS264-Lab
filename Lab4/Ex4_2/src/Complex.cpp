/*
 * Complex.cpp
 *
 *  Created on: Oct 16, 2012
 *      Author: se312002
 */
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double num1, double num2) {
	// TODO Auto-generated constructor stub

	num1_ = num1;
	num2_ = num2;


}
//Default constrcutor
Complex::Complex()
{
	num1_= 0;
	num2_ = 0;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

Complex Complex::Add(const Complex &z)
{

	Complex com(this -> num1_ + z.num1_, this -> num2_ + z.num2_);
    return com;
}

Complex Complex::Multiply(const Complex &z)
{

	Complex com(this -> num1_ * z.num1_, this -> num2_ * z.num2_);
	    return com;
}

Complex Complex::Subtract(const Complex &z)
{
	Complex com(this -> num1_  - z.num1_, this -> num2_ -  z.num2_);
	    return com;

}
void Complex::print()
{
    cout <<"(" <<num1_<<","<< num2_ <<")"<<endl;
}
