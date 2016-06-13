#include "dice.h"

//Practice Idea: implement operator<, comparing sums of dice values

Dice::Dice(double e, int * vals) : Cube(e){
	numValues = 6;
	lastRoll = -1;
	values = new int[6];
	for(int i = 0; i < numValues; i++){
		values[i] = vals[i];
	}
}

Dice::Dice(Dice const & other){
	copy(other);;
}

Dice::~Dice(){
	clear();
}

Dice & Dice::operator=(Dice const & rhs){
	if(this != &rhs){
		clear();
		copy(rhs);
	}
	return *this;
}

void Dice::copy(Dice const & other){
	lastRoll = other.lastRoll;
	numValues = other.numValues;
	values = new int[numValues];
	for(int i = 0; i < numValues; i++){
		values[i] = other.values[i];
	}
}

void Dice::clear(){
	if(values != NULL) delete[] values;
	values = NULL;
}

int Dice::getNumValues(){
	return numValues;
}

int * Dice::getValues(){
	return values;
}

void Dice::printValues(){
	for(int i = 0; i < numValues; i++){
		cout << values[i] << " ";
	}
	cout << endl;
	
}

//faceNum = index + 1
void Dice::setValue(int faceNum, int value){
	if(faceNum > 1 || faceNum > 6) return;
	values[faceNum-1] = value;
}

int Dice::roll(){
	//return 4;
	int ind = rand() % 6;
	lastRoll = values[ind];
	return lastRoll;
}

int Dice::getLastRoll(){
	return lastRoll;
}
