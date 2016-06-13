#include <iostream>
using namespace std;

//Alternate version of cube.cpp, with method declarations inside the class
//The final version of this class lies in the first_class_separate directory
class Cube{
     public:
	Cube(double e) {edge = e;};
	void setEdge(double e) {edge = e;};
	double getEdge() {return edge;};
	double getVol() {return edge*edge*edge;};
     private:
	double edge;
};

//main program
//expect the same output as cube.cpp
int main(){
     cout << "This is cubeAlt.cpp" << endl;
     Cube a(3.7);
     cout << a.getEdge() << endl;
     a.setEdge(5);
     cout << a.getEdge() << endl;
     Cube b(a); //Note: We never defined this constructor ourselves!
     cout << b.getVol() << endl;
     return 0;
}
