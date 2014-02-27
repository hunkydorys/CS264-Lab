/*
 * Client.cpp
 *
 *  Created on: Nov 13, 2012
 *      Author: se312002
 */

#include "Client.h"
#include "Log.h"
using namespace std;

Client::Client(const string &name) {
	// TODO Auto-generated constructor stub
    name_ = name;
    Log::getInstance().writeTolog(name_);

}


Client::~Client() {
	// TODO Auto-generated destructor stub
	Log::getInstance().writeTolog(name_);
}
