/*
 * vehicle.cpp
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

#include "vehicle.h"



// function print definition
void Vehicle::print() const
{
   cout << "\tNumber of doors: " << getNumberOfDoors()
   	     << "\n\tNumber of cylinders: " << getNumberOfCylinders()
   	     << "\n\tTransmission type: " << getTransmissionType()
    	    << "\n\tColor: " << getColor()
   	     << "\n\tFuel level: " << getFuelLevel() << endl;

} // end function print

// function setColor definition
void Vehicle::setColor( string color )
{
   vehicleColor = color;

} // end function setColor

// function setFuelLevel definition
void Vehicle::setFuelLevel( double amount )
{
   // assume 20 gallons is a full tank
   if ( amount > 0.0 && amount <= 20.0 )
      fuelLevel = amount;
   else
      fuelLevel = 5.0;

} // end function setFuelLevel

// return color
string Vehicle::getColor() const
{
   return vehicleColor;

} // end function getColor

// return fuelLevel
double Vehicle::getFuelLevel() const
{
   return fuelLevel;

} // end function getFuelLevel

// return transmissionType
int Vehicle::getTransmissionType() const
{
   return transmissionType;

} // end function getTransmissionType

// return numberOfDoors
int Vehicle::getNumberOfDoors() const
{
   return numberOfDoors;

} // end function getNumberOfDoors

// return numberOfCylinders
int Vehicle::getNumberOfCylinders() const
{
   return numberOfCylinders;

} // end function getNumberOfCylinders

// return class name
string Vehicle::getClassName() const
{
   return "Vehicle";

} // end function getClassName


