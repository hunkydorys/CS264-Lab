/*
 * Complex.h
 *
 *  Created on: Oct 16, 2012
 *      Author: se312002
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
public:
	Complex(double num1,double num2);
	Complex();
	Complex Add(const Complex &z);
	Complex Subtract(const Complex &z);
	Complex Multiply(const Complex &z);
	void print();
	virtual ~Complex();

protected:
	double num1_;
	double num2_;

};

#endif /* COMPLEX_H_ */
