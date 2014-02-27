/*
 * parkinglot.cpp
 *
 *  Created on: Nov 6, 2012
 *      Author: se312002
 */

#include "parkinglot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot() {
	// TODO Auto-generated constructor stub
	count = 0;

}
void ParkingLot::addVehicle(Vehicle * vec)
{
	vehicles.push_back(vec);
	count++;
}
int ParkingLot::getVehicleCount()const
{
	return count;
}
void ParkingLot::printVehicles()const
{


	for(int i=0;i<count;i++)
	{
		vehicles.at(i) -> print();
	}

}

ParkingLot::~ParkingLot() {
	// TODO Auto-generated destructor stub
}
