// Chapter 9 of C++ How to Program
// car.cpp
#include <iostream>

using std::cout;
using std::endl;

#include "Car.h"

/* Write the constructor for Car, which takes the Cars name and
 color and assigns them to private data members name and
 color; initialize maxSpeed to 95 and engineValves to 4 */
Car::Car(string name1, string color1)
{
	name = name1;
	color = color1;
	maxSpeed = 94;
	engineValves = 4;
}

// function setMaxSpeed definition
void Car::setMaxSpeed(int s) {
	maxSpeed = ((s >= 0 && s < 250) ? s : 40);

} // end function setMaxSpeed

// function setEngineValves definition
void Car::setEngineValves(int v) {
	engineValves = ((v >= 0 && v < 50) ? v : 4);

} // end function setEngineValves

// return maxSpeed
int Car::getMaxSpeed() const {
	return maxSpeed;

} // end function getMaxSpeed

// return engineValves
int Car::getEngineValves() const {
	return engineValves;

} // end function getEngineValves

// return name
string Car::getName() const {
	return name;

} // end function getName

// return color
string Car::getColor() const {
	return color;

} // end function getColor

// function print definition
void Car::print() const {
	cout << "Car: " << name << " is " << color << " and has a " << engineValves
			<< "-valve engine. MAX SPEED = " << maxSpeed << " mph. " << endl;

} // end function print


