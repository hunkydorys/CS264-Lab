/*
 * Observer.h
 *
 *  Created on: Nov 27, 2012
 *      Author: se312002
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public:
	//Observer();
	//virtual ~Observer();
	virtual void handleEvent(const double& x, const double& y)=0;
};

#endif /* OBSERVER_H_ */
