/*
 * Die.cpp
 *
 *  Created on: Oct 16, 2012
 *      Author: se312002
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Die.h"
using namespace std;

Die::Die(int numOfSides)
{

	srand(time(NULL));
	if(numOfSides < 4 )
	{
		numOfSides_ = 6;
		cout << "Don't be silly, can't have less than 4 sides, I gave you 6"<< endl;
	}

	else
	{
		numOfSides_ = numOfSides;
	}


}

int Die::rollDie(){

	dieValue_ = rand() % numOfSides_ + 1;
	return dieValue_;
}

int Die::getNumOfSides()
{
	return numOfSides_;
}

int Die::getValue()
{
    return dieValue_;
}



