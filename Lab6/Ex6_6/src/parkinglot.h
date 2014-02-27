/*
 * parkinglot.h
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#ifndef PARKINGLOT_H_
#define PARKINGLOT_H_




#include <vector>

#include "vehicle.h"

class ParkingLot {

public:
	ParkingLot();
	virtual ~ParkingLot();

	virtual void addVehicle( Vehicle * );
	virtual	void printVehicles() const;
	virtual	int getVehicleCount() const;

private:
	std::vector< Vehicle * > vehicles;
	int count;

};
#endif /* PARKINGLOT_H_ */
