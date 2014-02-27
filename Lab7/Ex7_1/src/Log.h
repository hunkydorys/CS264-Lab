/*
 * Log.h
 *
 *  Created on: Nov 13, 2012
 *      Author: se312002
 */

#ifndef LOG_H_
#define LOG_H_
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Log {
public:
	static Log& getInstance();
	void writeTolog(const std::string &message);

private:
	ofstream file;
	Log(){file.open("/home/se312002/log.txt");};
	~Log(){file.close();};
	Log(const Log &);
	Log & operator=(const Log &);
};



#endif /* LOG_H_ */
