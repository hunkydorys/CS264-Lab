/*
 * Truck.cpp
 *
 *  Created on: Oct 25, 2012
 *      Author: se312002
 */

#include "Truck.h"
#include "Vehicle.h"

Truck::Truck( double f ): Vehicle( 4, 6, "yellow", f, 5 )
{
   setCargo(false);
   setClassName( "Truck" );

}
bool Truck::hasCargo() const
{
   return cargo;

} // end function hasCargo

// function setCargo definition
void Truck::setCargo( bool c )
{
   cargo = c;

} // end function setCargo

// function operator<< definition
ostream &operator<<( ostream &output, const Truck &t )
{
   output << t.getClassName() << "\n"
          << "\tNumber of doors: "
          << t.getNumberOfDoors()
          << "\n\tNumber of cylinders: "
          << t.getNumberOfCylinders()
          << "\n\tTransmission type: "
          << t.getTransmissionType()
          << "\n\tColor: " << t.getColor()
          << "\n\tFuel level: "
          << t.getFuelLevel() << "\n";


   if ( t.cargo ){

      output << "\tThe truck is carrying cargo.\n";
   }
   else
      output << "\tThe truck is not carrying cargo.\n";

   return output;

}
