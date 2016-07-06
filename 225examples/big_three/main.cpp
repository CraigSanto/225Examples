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
     cout << c->getVol() << endl;
     delete c;
     c = NULL;
     c = new Cube(a);
     cout << c->getVol() << endl;
     delete c;
     c = NULL;
     b.setEdge(4);
     Cube d; //If we say "Cube d = b;" instead, the Copy Constructor is called!
     d = b;
     cout << b.getVol() << "=" << d.getVol() << endl;
     return 0;
}
//No more errors!
