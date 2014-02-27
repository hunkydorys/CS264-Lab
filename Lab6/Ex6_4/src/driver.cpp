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

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   vector<Vehicle *> vec;

   Taxi cab( 3.3 );
   Truck mack( 7.54 );
   vec.push_back(&cab);
   vec.push_back(&mack);


   vector<Vehicle *>::iterator it;
   	for(it = vec.begin();it<vec.end();++it)
   	{
   		 (*it)->print() ;
   		 (*it)->horn();

   	}

   return 0;

} // end main
