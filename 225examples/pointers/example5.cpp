#include <iostream>
using namespace std;

/* This code may seem to be working, but valgrind shows lost memory!
 * Figure out what's going on, and check with valgrind to make sure all
 * memory is free at the end!
 */
int main(){
	int * a = new int;
	int * b = new int;
	*a = 5;
	b = a;
	cout << "a: " << *a  << " b: " << b << endl;
	delete a;
	a = NULL;
	b = NULL;
}
