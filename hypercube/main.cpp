#include <iostream>
#include "hypercube.h"
using namespace std;

int main(){
     Hypercube<5> a(5);
     Hypercube<5> b(a);
     cout << a.getNumEdges() << endl;
     b.setName("BCube");
     cout << "a: " << a.getName() << endl;
     cout << "b: " << b.getName() << endl;
     Hypercube<4> * c = new Hypercube<4>(2);
     c->setName("PointerCube");
     cout << "c: " << c->getName() << endl;
     delete c;
     c = NULL;
     return 0;
}
