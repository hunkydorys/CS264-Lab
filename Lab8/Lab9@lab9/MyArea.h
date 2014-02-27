#ifndef GTKMM_EXAMPLE_MYAREA_H
#define GTKMM_EXAMPLE_MYAREA_H

#include "Shape.h"
#include <vector>

#include <gtkmm/drawingarea.h>

class MyArea : public Gtk::DrawingArea
{
public:
  MyArea(std::vector<Shape *> shapes):shapes_(shapes){};
  virtual ~MyArea() {};

protected:
  //Override default signal handler:
  virtual bool on_expose_event(GdkEventExpose* event);

  std::vector<Shape *> shapes_;
};

#endif // GTKMM_EXAMPLE_MYAREA_H
