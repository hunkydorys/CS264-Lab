//============================================================================
// Name        : driver.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;
#include <stdlib.h>
#include <time.h>
#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

int main()
{
	srand(time(NULL));


   ParkingLot parkingLot;
   for(int i=0;i<10;i++)
   {
	   if(i%2==0)
	   {
		   parkingLot.addVehicle(new Taxi(((float)(rand()%100))/((float)(rand()%100))));
	   }
	   else{
		   parkingLot.addVehicle(new Taxi(((float)(rand()%100))/((float)(rand()%100))));

	   }
   }


   parkingLot.printVehicles();



   return 0;

} // end main

