#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Cube{
     public:
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
