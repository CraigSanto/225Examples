#include <iostream>
using namespace std;

/* Proper allocation and deallocation of a dynamic 2D array
 * Including swapping out a row of the array
 * A good rule of thumb is: call delete for every time you call new
 */

void printArr(int * x, int len){
	for(int i = 0; i < len; i++){
		cout << x[i] << " ";
	} 
	cout << endl;
}

int main(){
	int numRows = 4;
	int numCols = 5;
	int ** x = new int * [numRows];
	for(int i = 0; i < numRows; i++){
		x[i] = new int[numCols];
		for(int j = 0; j < numCols; j++){
			x[i][j] = (i*numCols + j);
		}
		printArr(x[i], numCols);
	}
	//swapping x[1] for y
	int * y = new int[numCols];
	for(int i = 0; i < numCols; i++) y[i] = i*2;
	delete[] x[1];
	x[1] = y;
	y = NULL; //avoiding dangling pointers and double-deleting
	for(int i = 0; i < numRows; i++) printArr(x[i], numCols);
	//deallocation
	for(int i = 0; i < numRows; i++){
		delete[] x[i];
		x[i] = NULL;
	}
	delete[] x;
	x = NULL;
	return 0;
}
