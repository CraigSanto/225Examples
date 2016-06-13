#include <iostream>
using namespace std;
//above allows us to use cout/endl, and without using std:: in front of them.
//can't use clang++ to compile? type "source /class/cs225/setup" in the terminal

//class declaration
//Could also create "struct Cube", in which everything is implicitly public
class Cube{
     public:
	//The copy constructor Cube(Cube other) is done for us!
	//We can trust it because we use no dynamic memory (covered later).
	//However, because we defined a constructor Cube(double s), 
	//We are not given the default Cube() constructor automatically
	Cube(double e);
	void setEdge(double e);
	double getEdge();
	double getVol();
     private:
	double edge;
}; //NEVER forget the semicolon after class declarations!

//member function declaration
//Cube:: is the resolution operator 
//It tells the compiler what these methods belong to.
Cube::Cube(double e) {edge = e;}

void Cube::setEdge(double e) {edge = e;}

double Cube::getEdge() {return edge;}

double Cube::getVol() {return edge*edge*edge;}

//main program
//int instead of void is convention - return values can then be associated with
//certain paths/errors - 0 typically represents the desired outcome.
int main(){
     cout << "This is cube.cpp" << endl;
     Cube a(3.7);
     cout << a.getEdge() << endl;
     a.setEdge(5);
     cout << a.getEdge() << endl;
     Cube b(a); //Note: We never defined this constructor ourselves!
     cout << b.getVol() << endl;
     return 0;
}
