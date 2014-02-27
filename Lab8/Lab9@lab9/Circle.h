/*
 * Circle.h
 *
 *  Created on: 30 Nov 2010
 *      Author: john
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

#include <cairomm/context.h>

class Circle: public Shape {
public:
	Circle(double x=0.0, double y=0.0, double radius=1.0): x_(x), y_(y), radius_(radius) {};
	virtual ~Circle() {};
	virtual void handleEvent(const double& x, const double& y);

	virtual void draw(const Cairo::RefPtr<Cairo::Context> cr, const int width, const int height) const;
private:
	double x_, y_, radius_;
};

#endif /* CIRCLE_H_ */
