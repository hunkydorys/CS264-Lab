#include "MyArea.h"
#include "Circle.h"
#include "Square.h"

#include <cairomm/context.h>

bool MyArea::on_expose_event(GdkEventExpose* event)
{
  // This is where we draw on the window
  Glib::RefPtr<Gdk::Window> window = get_window();
  if(window)
  {
    Gtk::Allocation allocation = get_allocation();
    const int width = allocation.get_width();
    const int height = allocation.get_height();
    int lesser = MIN(width, height);

    Cairo::RefPtr<Cairo::Context> cr = window->create_cairo_context();
    cr->set_line_width(lesser * 0.02);  // outline thickness changes
                                        // with window size

    // clip to the area indicated by the expose event so that we only redraw
    // the portion of the window that needs to be redrawn
    cr->rectangle(event->area.x, event->area.y,
            event->area.width, event->area.height);
    cr->clip();

/*    // coordinates for the center of the window
    int xc, yc;
    xc = width / 2;
    yc = height / 2;

    Square my_circle(xc,yc,lesser/4.0);

    // now draw a circle
    my_circle.draw(cr);*/

    for (std::vector<Shape *>::const_iterator i = shapes_.begin(); i != shapes_.end(); i++)
    	(*i)->draw(cr, width, height);
  }

  return true;
}

