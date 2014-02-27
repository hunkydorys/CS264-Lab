/*
 * Log.cpp
 *
 *  Created on: Nov 13, 2012
 *      Author: se312002
 */

#include "Log.h"
#include <iostream>
#include <fstream>

using namespace std;

Log& Log::getInstance()
{
	static Log instance;
	return instance;
}

void Log::writeTolog(const string &message )
{
	    file << message << endl;
}

