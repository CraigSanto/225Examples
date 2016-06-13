#include <iostream>
#include "cube.h"
using namespace std;

//separate main method
int main(){
     Cube a(5);
     Cube b(a);
     a.setFaceName(1, "Lid");
     cout << "Cube a's faces: " << endl;
     a.printFaces();
     cout << "Cube b's faces: " << endl;
     b.printFaces();
     Cube * c = new Cube(2);
     delete c;
     c = NULL;
     return 0;
}
//No more errors!
