/*
 * Square.cpp
 *
 *  Created on: 30 Nov 2010
 *      Author: john
 */

#include "Square.h"

void Square::draw(const Cairo::RefPtr<Cairo::Context> cr, const int width, const int height) const{
	// draw a square
    cr->set_source_rgb(0.8, 0.0, 0.0);
    cr->move_to((x_ - width_/2.0)*width, (y_ - width_/2.0)*height);
    cr->line_to((x_ + width_/2.0)*width, (y_ - width_/2.0)*height);
    cr->line_to((x_ + width_/2.0)*width, (y_ + width_/2.0)*height);
    cr->line_to((x_ - width_/2.0)*width, (y_ + width_/2.0)*height);
    cr->line_to((x_ - width_/2.0)*width, (y_ - width_/2.0)*height);
    cr->stroke();
}

void Square::handleEvent(const double& x, const double& y)
{
	x_ = x;
	y_ = y;
}
