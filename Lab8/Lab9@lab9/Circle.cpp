/*
 * Circle.cpp
 *
 *  Created on: 30 Nov 2010
 *      Author: john
 */

#include "Circle.h"

void Circle::draw(const Cairo::RefPtr<Cairo::Context> cr, const int width, const int height) const{
    // now draw a circle
    cr->save();
    cr->arc(x_*width, y_*height, radius_*width, 0.0, 2.0 * M_PI); // full circle
    cr->set_source_rgba(0.0, 0.0, 0.8, 0.6);    // partially translucent
    cr->fill_preserve();
    cr->restore();  // back to opaque black
    cr->stroke();
}

 void Circle::handleEvent(const double& x, const double& y)
 {
	 x_ = x;
	 y_ = y;
 }
