#include <iostream>

using namespace std;

//brief showcase of const

//test1: If we don't use const, our compiler will allow this
//Is what we do here wrong? Not inherently. It depends on our goal.
void test1(){
	int x = 7;
	int &w = x;
	w = 14;
	cout << x << endl;
}

//test2: The same as test2, but now int &p is const
//Uncomment test2 to see the compiler throw an error
//"Read-only variable is not assignable"
/*void test2(){
	int x = 7;
	const int &w = x;
	w = 14;
	cout << x << endl;
}*/

//What if we modify x instead of p?
//We see that we can sneak around "read-only" items with pointers!
//Use this power carefully!
void test3(){
	int x = 7;
	const int &w = x;
	x = 14;
	cout << x << endl;
	cout << w << endl;
}

int main(){
	cout << "Test 1:" << endl;
	test1();
	//cout << "Test 2:" << endl;
	//test2();
	cout << "Test 3:" << endl;
	test3();

	return 0;
}
