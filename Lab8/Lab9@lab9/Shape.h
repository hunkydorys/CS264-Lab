/*
 * Shape.h
 *
 *  Created on: 30 Nov 2010
 *      Author: john
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include "Observer.h"
#include <cairomm/context.h>

class Shape : public Observer {
public:

	//virtual ~Shape() {};
	virtual void draw(const Cairo::RefPtr<Cairo::Context> cr, const int width, const int height) const = 0;
	//virtual void handleEvent(const double& x, const double& y ) = 0;

};

#endif /* SHAPE_H_ */
