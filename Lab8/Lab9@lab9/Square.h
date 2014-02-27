/*
 * Square.h
 *
 *  Created on: 30 Nov 2010
 *      Author: john
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

#include <cairomm/context.h>

class Square: public Shape {
public:
	Square (double x=0.0, double y=0.0, double width=1.0): x_(x), y_(y), width_(width) {};
	virtual ~Square() {};
	virtual void handleEvent(const double& x, const double& y );

	virtual void draw(const Cairo::RefPtr<Cairo::Context> cr, const int width, const int height) const;
private:
	double x_, y_, width_;
};

#endif /* SQUARE_H_ */
