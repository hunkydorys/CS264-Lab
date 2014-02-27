/*
 * Client.h
 *
 *  Created on: Nov 13, 2012
 *      Author: se312002
 */

#ifndef CLIENT_H_
#define CLIENT_H_
#include <string>

class Client {

public:
	Client(const std::string &name);
	virtual ~Client();
private:
	std::string name_;
};

#endif /* CLIENT_H_ */
