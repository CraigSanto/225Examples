#include <iostream>

using namespace std;

//Continuation of const work:
//int * const vs const int *

//int * const p is a const pointer to an int.
//So, we can modify the value p points to, but not p itself
void test4(){
	int y = 9;
	int * const p = &y;
	y--;
	cout << y << endl;
	cout << *p << endl;

	(*p)++;
	//p = new int(5); //ERROR: p is read-only
	cout << y << endl;
	cout << *p << endl;

}

//const int * q is a pointer to a const int
//So, we can modify q, but we cannot directly modify the value q points to
void test5(){
	int z = 42;
	const int * q = &z;
	z--; //z itself isn't const, so we can modify it still
	cout << z << endl;
	cout << *q << endl;
	
	//(*q)++; ERROR: the value of q is read-only
	q = new int(22);
	cout << z << endl;
	cout << *q << endl;
}

//How do we protect against modifications and make something truly constant?
//Do both!
void test6(){
	int a = 10;
	const int * const b = &a;
	a--; //but until you make a const, you can't stop this!
	cout << a << endl;
	cout << *b << endl;

	//(*b)++; //ERROR: the value of b is read-only
	//b = new int(29); //ERROR: b is read-only
	cout << a << endl;
	cout << *b << endl;
}

int main(){
	cout << "Test 4:" << endl; //int * const
	test4();
	cout << "Test 5:" << endl; //const int *
	test5();
	cout << "Test 6:" << endl; //const int * const
	test6();

	return 0;
}
