#include <iostream>
using namespace std;

/* Declaring DYNAMIC (heap) arrays:
 * Note that the initial values of the arrays are 0, and not garbage
 * The print method still doesn't like taking in these values.
 *
 * Note the slight difference in the delete call for arrays.
 * Otherewise, there is nothing else special about an int* assigned to an array.
 * Once freed, it can just as easily point to a single int.
 * But this is most likely bad form.
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
	for(int i = 0; i < xLen; i++) x[i] = i*i;
	printArr(x, xLen);
	delete[] x;
	x = NULL;
	x = new int(5);
	cout << *x << endl;
	delete x;
	x = NULL;
	return 0;
}
