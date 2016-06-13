#include <iostream>
using namespace std;

/* This code may appear to run properly, but there's an insidious bug!
 * Don't believe me? Copy this code segment into example1.cpp and run it -
 * You get a SegFault! This output difference is called UNDEFINED BEHAVIOR.
 * Strange things are happening because we haven't properly allocated space
 * for our pointer.
 *
 * There are two ways to handle this problem with two outcomes.
 * One will cause p to point to a stack variable, and the other to heap memory.
 * Which one is better? This depends on your implementation.
 * In CS225, we don't typically make use of pointers to stack variables,
 * or the address operator (&)
 *
 * Make a one-line change to fix this insidious bug.
 * Try to do it without looking about example1.cpp!
 */
int main(){
	int * p;
	int q = 6;
	*p = q;
	cout << *p << endl;
	return 0;
} 

