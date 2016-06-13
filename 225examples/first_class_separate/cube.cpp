#include "cube.h"
/* The include statement links this file to the .h
 * Without it, this file wouldn't know about the Cube class.
 * 
 * The difference between #include <iostream> and #include "cube.h"
 * A file in ""s will cause the compiler first to search for the file in the 
 * current directory. A file in <>'s will cause the compiler to first search in
 * the include path list.
 * What you need to know: Include other files in the directory with ""
 * 			  Include everything else with <> (ie: standard library)
 */

//The .cpp (c++) file resolves the methods defined in the respective .h file
Cube::Cube(double e) {edge = e;}

void Cube::setEdge(double e) {edge = e;}

double Cube::getEdge() {return edge;}

double Cube::getVol() {return edge*edge*edge;}
