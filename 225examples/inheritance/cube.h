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
	virtual ~Cube(); //Big Three: Destructor - MUST be virtual
	Cube & operator=(Cube const & rhs); //Big Three: Operator=
	Cube(double e = 1.0);
	void setEdge(double e);
	double getEdge();
	double getVol();
	int getNumFaces();
	void printFaces();
	string * getFaceNames();
	string getFaceName(int faceNum); //where faceNum = index + 1
	void setFaceName(int faceNum, string name); //faceNum = index + 1
     private:
	void clear(); //notice: Big Three helpers made private
	void copy(Cube const & other);
	double edge;
	int numFaces;
	string * faceNames;
};

#endif
