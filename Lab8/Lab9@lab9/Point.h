/*
 * Point.h
 *
 *  Created on: Nov 20, 2012
 *      Author: se312002
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>
#include <list>
#include "Shape.h"

using namespace std;
class Point {
public:
	Point();
	virtual ~Point();
	void add(Shape* sp);
	void remove(Shape* sp );
	 double getX();
	 double getY();
	void reset(double x,double y);

private:
	double _x,_y;
	list <Shape*> _shapes;
	void _Notify();

};

#endif /* POINT_H_ */
