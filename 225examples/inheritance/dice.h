#ifndef DICE_H
#define DICE_H

#include "cube.h"
#include <stdlib.h>

class Dice : public Cube{
     public:
	Dice(double e = 1.0, int * vals = new int[6]{1, 2, 3, 4, 5, 6});
	Dice(Dice const & other);
	virtual ~Dice();
	Dice & operator=(Dice const & rhs);
	void printValues();
	void setValue(int faceNum, int value); //faceNum = index + 1
	int getNumValues();
	int * getValues();
	int roll();
	int getLastRoll();
     private:
	void clear();
	void copy(Dice const & other);
	int * values; //the value on each face, in same order as faceNames in Cube
	int lastRoll; //value of the last roll
	int numValues;
};

#endif
