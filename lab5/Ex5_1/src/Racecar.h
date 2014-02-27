// Chapter 9 of C++ How to Program
// racecar.h
#ifndef RACECAR_H
#define RACECAR_H

#include "Car.h"

class Racecar: public Car {
public:
	Racecar( string n, string c , string s);

	void setGearbox(int gearNo);
	void useParachute();
	void print() const;

private:
	int gearbox; // number of gears in car (e.g., 5-speed)
	string sponsor;
	bool parachuteDeployed;

}; // end class Racecar

#endif // RACECAR_H

