#include <iostream>
using namespace std;

//Proper pointer declarations!
int main(){
	int * x = new int(1); //Points to an integer stored on the HEAP
	cout << *x << endl;

	int * y; //Points to an integer stored on the STACK     // K: currently points to nothing, might want to move that comment down 2 lines
	int a = 2;
	y = &a;
	cout << *y << endl;

	int * z = new int; //Points to an integer on the HEAP
	int b = 3;
	*z = b;
	b++; //NOTE: The value of b has been deep copied: *z is unchanged
	cout << *z << endl;
	cout << b << endl;

	return 0;
}
