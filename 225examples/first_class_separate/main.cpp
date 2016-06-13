#include <iostream>
#include "cube.h"
using namespace std;
//Once again, we must attach the sphere class to this external main file

//separate main method
int main(){
     cout << "This is main.cpp" << endl;
     Cube a(3.7);
     cout << a.getEdge() << endl;
     a.setEdge(5);
     cout << a.getEdge() << endl;
     Cube b(a); //Note: We never defined this constructor ourselves!
     cout << b.getVol() << endl;
     return 0;
}

//Questions about the Makefile? Visit the course website for more info!
