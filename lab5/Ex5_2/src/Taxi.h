/*
 * Taxi.h
 *
 *  Created on: Oct 25, 2012
 *      Author: se312002
 */

#ifndef TAXI_H
#define TAXI_H

#include <iostream>

#include "Vehicle.h"

// class Taxi definition
class Taxi : public Vehicle {
   friend ostream& operator<<( ostream &, const Taxi & );

public:
   Taxi( double );
   bool hasCustomers();
   void setCustomers(bool);


private:
   bool customers;

};
#endif /* TAXI_H_ */
