#include <iostream>
using namespace std;

/* Declaring DYNAMIC (heap) arrays:
 * Note that the initial values of the arrays are 0, and not garbage
 * The print method still doesn't like taking in these values.
 * 
 * K: I don't think this is true ^. I ran the code and added a printArr before the for loop
 * and the output was : 0: 0 1: 268435456 2: 0 3: 268435456 4: 2084896784.
 * I think we should just encourage them to never assume memory is 0ed out for them.
 * That way they'll never get into trouble :p
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
