#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Cube{
     public:
	Cube(const Cube & other); //Big Three: Copy Constructor
	~Cube(); //Big Three: Destructor
	Cube & operator=(Cube const & rhs); //Big Three: Operator=
	void clear(); //Big Three helper - Destructor and Operator=
	void copy(Cube const & other); //Big Three helper - Copy and Operator=

	Cube(double e = 1.0); //turned into a default argument
	void setEdge(double e);
	double getEdge();
	double getVol();
	int getNumFaces();
	void printFaces();
	string * getFaceNames();
	string getFaceName(int faceNum); //where faceNum = index + 1
	void setFaceName(int faceNum, string name); //faceNum = index + 1
     private:
	double edge;
	int numFaces;
	string * faceNames;
};

#endif
