/*
 * Car.h
 *
 *  Created on: Oct 23, 2012
 *      Author: se312002
 */

// car.h
#ifndef CAR_H
#define CAR_H

#include <iostream>

#include <string>

using namespace std;

// class car definition
class Car {

public:
   Car( string name, string color );

   void setMaxSpeed( int );
   int getMaxSpeed() const;

   void setEngineValves( int );
   int getEngineValves() const;

   string getColor() const;
   string getName() const;

   void print() const;

private:
   int maxSpeed;
   int engineValves;
   string color;
   string name;

}; // end class Car

#endif // CAR_H
