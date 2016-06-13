#include "cube.h"

Cube::Cube(double e) {
	edge = e;
	numFaces = 6;
	faceNames = new string[6];
	faceNames[0] = "Top";
	faceNames[1] = "Front";
	faceNames[2] = "Left";
	faceNames[3] = "Back";
	faceNames[4] = "Right";
	faceNames[5] = "Bottom";
}

Cube::Cube(Cube const & other){
	copy(other);
}

Cube::~Cube(){
	clear();
}

Cube & Cube::operator=(Cube const & rhs){
	if(this != &rhs){
		clear();
		copy(rhs);
	}
	return *this;
}

void Cube::copy(const Cube & other){
	edge = other.edge;
	numFaces = other.numFaces;
	faceNames = new string[numFaces];
	for(int i = 0; i < numFaces; i++){
		faceNames[i] = other.faceNames[i];
	}
}

void Cube::clear(){
	if(faceNames != NULL) delete[] faceNames;
	faceNames = NULL;
}

void Cube::setEdge(double e) {edge = e;}

double Cube::getEdge() {return edge;}

double Cube::getVol() {return edge*edge*edge;}

int Cube::getNumFaces() {return numFaces;}

//reformatted printing!
void Cube::printFaces(){
	for(int i = 0; i < numFaces; i++){
		cout << faceNames[i] << " ";
	}
	cout << endl;
}

string * Cube::getFaceNames() {return faceNames;}

//faceNum = index + 1
string Cube::getFaceName(int faceNum){
	if(faceNum < 1 || faceNum > 6) return "ERROR";
	else return faceNames[faceNum-1];
}

//faceNum = index + 1
void Cube::setFaceName(int faceNum, string name){
	if(faceNum < 1 || faceNum > 6) return;
	faceNames[faceNum-1] = name;
}
