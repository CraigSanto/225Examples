#include <iostream>
#include "cube.h"
using namespace std;

//separate main method
int main(){
     Cube a(5);
     cout << "Cube a's faces: " << endl;
     a.printFaces();
     Cube b(a);
     a.setFaceName(1, "Lid");
     cout << "Cube b's faces: " << endl;
     b.printFaces();
     Cube * c = new Cube(2);
     delete c;
     c = NULL;
     return 0;
}
//Error: When we change Cube a's top face, b's changes too!
//Error: When we delete Cube c, we create a memory leak!
//We need to deep-copy the elements of, and properly deallocate, a Cube.
//Find out how when we discuss The Big Three!
