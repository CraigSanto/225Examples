#include <iostream>
using namespace std;

/* Declaring STATIC (stack) arrays:
 * Size MUST be known at compile time.
 * Note that the intial values of the arrays are garbage
 * Run Valgrind and see that it doesn't like calling the print method with
 * uninitialized values.
 */

void printArr(int * x, int len){
	for(int i = 0; i < len; i++){
		cout << i << ": " << x[i] << " ";
	} 
	cout << endl;
}

int main(){
	int x[5];
	int xLen = 5;
	//for(int i = 0; i < xLen; i++) x[i] = i;
	printArr(x, xLen);
	int a = 4;
	int y[a];
	//for(int i = 0; i < a; i++) y[i] = i*2;
	printArr(y, a);
	return 0;
}
