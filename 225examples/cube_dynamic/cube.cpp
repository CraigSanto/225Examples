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

void Cube::setEdge(double e) {edge = e;}

double Cube::getEdge() {return edge;}

double Cube::getVol() {return edge*edge*edge;}

int Cube::getNumFaces() {return numFaces;}

void Cube::printFaces(){
	for(int i = 0; i < numFaces; i++){
		cout << faceNames[i] << endl;
	}
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
