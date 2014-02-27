/*
 * Truck.h
 *
 *  Created on: Oct 25, 2012
 *      Author: se312002
 */

#ifndef TRUCK_H_
#define TRUCK_H_
#include "Vehicle.h"

class Truck: public Vehicle {
	friend ostream& operator<<( ostream &, const Truck & );

public:

	Truck(double);
	bool hasCargo() const;
	void setCargo(bool);
	//virtual ~Truck();
private:
    bool cargo;
};

#endif /* TRUCK_H_ */
