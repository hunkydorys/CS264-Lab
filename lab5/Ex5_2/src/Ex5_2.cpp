//============================================================================
// Name        : Ex5_2.cpp
// Author      : se312002
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using std::cout;
using std::endl;

#include "Vehicle.h"
#include "Taxi.h"
#include "Truck.h"

int main() {
	Vehicle car(2, 6, "blue", 14.6, 3);
	Taxi cab(3.3);
	Truck mack(7.54);
	mack.setCargo(true);

	cout << car << cab << mack;

	return 0;

}
