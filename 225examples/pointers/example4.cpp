#include <iostream>
using namespace std;

/* So how can we detect undefined behavior that appears to be working fine?
 * We have several tools, including valgrind. Typing valgrind ./exename will
 * cause valgrind to run on the executable, checking for memory leaks and other
 * pointer issues.
 *
 * Here we set p and q equal to each other - and when we alter one of them, the
 * other is affected is well.
 *
 * After deleting p, we can see that q is also affected (this cout is commented
 * out because valgrind doesn't like us accessing values we don't own). We can
 * see that q has also been affected, because we are greeted with an error when
 * we try to delete q - we are attempting to free up already free memory.
 *
 * After reallocating p, when we run the exe by itself both p and q become 4 -
 * but if we run it with valgrind, we see that [ is 4, but q is 8. 
 * This behavior makes q a DANGLING POINTER. And it's safest to set it to null
 * before we touch it again.
 *
 * Experiment with this code! Comment/uncomment lines and run with/without
 * valgrind to get a feel for what can go wrong!
 */ 
int main(){
	int * p, * q;
	p = new int(7);
	q = p;
	cout << "p: " << *p << " q: " << *q << endl;
	(*p)++;
	cout << "p: " << *p << " q: " << *q << endl;
	delete p;
	//cout << "p: " << *p << " q: " << *q << endl;
	p = NULL;
	q = NULL;
	//delete q; //"double free" error - freeing already freed memory
	p = new int(4);
	q = new int(*p);
	cout << "p: " << *p << " q: " << *q << endl;
	(*q)++;
	cout << "p: " << *p << " q: " << *q << endl;
	delete p;
	p = NULL;
	delete q;
	q = NULL;
	return 0;
}
