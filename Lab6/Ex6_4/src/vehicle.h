/*
 * vehicle.h
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

#include <string>

using std::string;

// class Vehicle definition
class Vehicle{
public:
	// constructor
	Vehicle( const int doors, const int cylinders,
	   string color, double initialFuel,
					   const int transmission )
	   : numberOfDoors( doors ), numberOfCylinders( cylinders ),
	     transmissionType( transmission )
	{
	   setFuelLevel( initialFuel );

	   setColor( color );

	} // end class Vehicle constructor

   void setColor( string color );
   string getColor() const;

   void setFuelLevel( double amount );
   double getFuelLevel() const;

   int getTransmissionType() const;
   int getNumberOfDoors() const;
   int getNumberOfCylinders() const;

   virtual string getClassName() const;

   virtual void horn() const=0;
   virtual void print() const;
   /* Write prototype for pure virtual function horn */
   /* Write prototype for virtual function print     */

private:
   const int numberOfDoors;
   const int numberOfCylinders;
   string vehicleColor;
   double fuelLevel;
   const int transmissionType;

}; // end class Vehicle

#endif // VEHICLE_H
