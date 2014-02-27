/*
 * taxi.h
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#ifndef TAXI_H
#define TAXI_H
#include <iostream>

#include "vehicle.h"

// class Taxi definition
class Taxi : public Vehicle {

public:
   Taxi( double );

   bool hasCustomers() const;
   void setCustomers( bool );
   virtual void horn() const;

   /* Write prototype for virtual function horn */

   virtual void print() const;
   virtual string getClassName() const;

private:
   bool customers;

}; // end class Taxi

#endif // TAXI_H
