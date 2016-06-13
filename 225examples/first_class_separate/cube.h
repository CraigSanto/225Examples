#ifndef CUBE_H
#define CUBE_H

/*The weird statements seen at the top and bottom are "inclusion guards"
*They prevent multiple inclusion errors, and are expected to be in every .h
*file you create this semester
*/

//The .h ("header") file holds your class declaration, not the definitions
//This file separation is a form of ENCAPSULATION
class Cube{
     public:
	Cube(double e);
	void setEdge(double e);
	double getEdge();
	double getVol();
     private:
	double edge;
}; //Note: still need the semicolon, even with separate files

#endif
