#ifndef HYPERCUBE_H
#define HYPERCUBE_H

#include <iostream>
#include <string>
#include <math.h>
using std::string;
using std::cout;
using std::endl;

template <int Dim> //The dimension of our hypercube.
class Hypercube{
     public:
	Hypercube(double e = 1.0, string n = "Hypercube");
	Hypercube(Hypercube<Dim> const & other);
	~Hypercube();
	Hypercube<Dim> & operator=(Hypercube<Dim> const & rhs);
	void setEdge(double e);
	double getEdge();
	void setName(string n);
	string getName();
	double getHyperVol();
	int getNumEdges();
     private:
	void clear();
	void copy(Hypercube<Dim> const & other);
	double edge;
	int numEdges;
	string * name; 
	/* I don't want to distract from the main point of the example -
	*instead of naming all faces, the hypercube itself will be named.
	*Using a pointer to showcase dynamic memory
	*/
};
#include "hypercube.cpp"
#endif
