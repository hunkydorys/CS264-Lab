//============================================================================
// Name        : Ex4_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Die.h"
using namespace std;

int main() {


	int die, roll1, roll2, noOfRolls, sumOfDice, arraySize;

	srand(time(NULL));
	cout << "Please enter how many times you would like to roll the dice"
			<< endl;
	cin >> noOfRolls;
	cout << "Please enter how many sides you would like the dice to have"
				<< endl;
	cin >> die;

	Die *myDie1 = new Die(die);
	Die *myDie2 = new Die(die);
    arraySize = die+die -1;
	int percenOfRolls[arraySize];
	for (int i = 0; i < arraySize; i++) {
		percenOfRolls[i] = 0;
	}
	for (int i = 0; i < noOfRolls; i++) {
		roll1 = myDie1 -> rollDie();
		roll2 = myDie2 -> rollDie();
		sumOfDice = roll1 + roll2;
		percenOfRolls[sumOfDice - 2] += 1;
	}
	for (int j = 0; j <arraySize ; j++) {
		cout << 2 + j << " was rolled " << percenOfRolls[j] << " times "
				<< endl;
	}

}
