#include <iostream>
using namespace std;

/* What we have here is another insidious bug - this time because of delete.
 * delete empties the values associated with the pointer it's called on.
 * The system could easily use the memory location freed up by delete any time -
 * and with a large enough program, it eventually will.
 * If we want to safely use a deleted pointer, we must allocate new space.
 * The commented lines demonstrate this.
 *
 * Looking at the print statement immediately after e is deleted,
 * we can see that the memory that one held the value of e has been emptied
 * to the default value of an int: 0. But what we see there isn't really our
 * concern - we have given control of that memory location back to the system.
 */

int main(){
	int c = 2;
	int * d = new int(c);
	int * e = new int(*d);
	cout << *d << endl;
	cout << *e << endl;
	delete e;
	//e = NULL; //While this may not always be necessary, it's never wrong.
	cout << *e << endl;
	//e = new int;
	*e = (*d)*2;
	cout << *e << endl;
	//Proper deletion is always a good idea.
	//During the semester, your codeee will be tested for memory leaks.
	/*delete d;
	d = NULL;
	delete e;
	e = NULL;*/
	return 0;
}
