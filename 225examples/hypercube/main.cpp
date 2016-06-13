#include <iostream>
#include "hypercube.h"
using namespace std;

int main(){
     Hypercube<5> a(5);
     Hypercube<5> b(a);
     Hypercube<4> * c = new Hypercube<4>(2);
     delete c;
     c = NULL;
     return 0;
}
