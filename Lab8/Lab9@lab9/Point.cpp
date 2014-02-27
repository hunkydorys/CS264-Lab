/*
 * Point.cpp
 *
 *  Created on: Nov 20, 2012
 *      Author: se312002
 *      I did not abstract away a subject base class. I decided to
 *      have it all in the same class file because it was easier to manage
 *
 */

#include "Point.h"
#include <list>
#include "Shape.h"
#include <iostream>
Point::Point() {
	// TODO Auto-generated constructor stub

}
void Point::_Notify()
{
	typedef list<Shape*>::iterator _iterator;
	for(_iterator it = _shapes.begin(); it != _shapes.end(); it++)
	{
		(*it) -> handleEvent(this -> _x, this ->_y);
	}
}
void Point::add(Shape* sp)
{
	_shapes.push_back(sp);
}

void Point::remove(Shape* sp)
{
	_shapes.remove(sp);
}
 double Point::getX()
{
	return _x;
}
double Point::getY()
{
	return _y;
}

void Point::reset(double x,double y)
{
	_x=x;
	_y=y;
	_Notify();
}

Point::~Point() {
	// TODO Auto-generated destructor stub
}
