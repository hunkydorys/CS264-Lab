#include "Shape.h"
#include "MyArea.h"
#include "Circle.h"
#include "Square.h"
#include "Point.h"
#include <iostream>
#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>

using namespace std;
#include <vector>

int main(int argc, char** argv) {
	cout << "start" << endl;
	// Sets up gtk which is the gui toolkit that we are using
	Gtk::Main kit(argc, argv);
	std::vector<Shape *> circles;
	std::vector<Shape *> squares;
	std::vector<Point *> points;
	for (int i = 0; i < 10; i++) {
		points.push_back(new Point());
		points[i] -> reset(0, 0);
	}
	//Circles
	for (int i = 0; i < 10; i++) {
		circles.push_back(new Circle(0.5,0.5,0.25));
	}
	//Squares
	for (int i = 0; i < 10; i++) {
		squares.push_back( new Square(0.5,0.5,0.25));
	}
	//Adding circles and squares to a point
	for (int i = 0; i <10; i++) {
		points[i]-> add(circles[i]);
		points[i]-> add(squares[i]);
	}
	//reseting the observed values
	float counter = 0.0;
	for (int i = 0; i <10; i++) {
		points[i] -> reset(counter, counter);
		counter+=0.05;
	}

	// Create some windows and render things
	Gtk::Window win;
	win.set_title("DrawingArea");

	Gtk::HBox container;

	MyArea square_area(squares);
	container.pack_start(square_area);
	square_area.show();

	MyArea circle_area(circles);
	container.pack_start(circle_area);
	circle_area.show();

	container.show();
	win.add(container);

	Gtk::Main::run(win);

	//pt.reset(0.5,0.5);
	return 0;
}
