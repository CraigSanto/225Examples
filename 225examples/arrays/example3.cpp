#include <iostream>
using namespace std;

/* This example demonstrates what happens when we try to equate two arrays:
 * *x = *y is the same as *x[0] = *y[0]. Deeper copying is necessary.
 */

void printArr(int * x, int len){
	for(int i = 0; i < len; i++){
		cout << i << ": " << x[i] << " ";
	} 
	cout << endl;
}

int main(){
	int * x = new int[5];
	int xLen = 5;
	for(int i = 0; i < xLen; i++) x[i] = i+10;
	cout << "initial value of x[0]: " << x[0] << endl;
	int * y = new int[6];
	int yLen = 6;
	for(int i = 0; i < yLen; i++) y[i] = i*4;
	*x = *y;
	printArr(x, xLen);
	printArr(y, yLen);
	delete[] x;
	x = NULL;
	delete[] y;
	y = NULL;
	return 0;
}
