/*
 * Die.h
 *
 *  Created on: Oct 16, 2012
 *      Author: se312002
 */

#ifndef DIE_H_
#define DIE_H_

class Die {
public:
	int rollDie();
	int getNumOfSides();
	int getValue();
    Die(int numOfSides);

protected:
    int numOfSides_;
    int dieValue_;

};

#endif /* DIE_H_ */
