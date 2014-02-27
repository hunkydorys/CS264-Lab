/*
 * truck.h
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

#include "vehicle.h"

// class Truck definition
class Truck : public Vehicle {

public:
   Truck( double );

   bool hasCargo() const;
   void setCargo( bool );

   virtual void horn() const;
   virtual void print() const;
   virtual string getClassName() const;

private:
   bool cargo;

}; // end class Truck

#endif // TRUCK_H
