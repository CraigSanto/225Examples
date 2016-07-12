#include <iostream>
#include <vector>

using namespace std;

//final const tests: const as a parameter and a return type

/* Here I'm setting up a system for my clients to hide their data.
 * They give me an int, and I turn it into a vector<int>.
 * I also have a system that can change a vector<int> into an int
 * I'm going to use const to control this system's capabilities
 *
 * Side note: You'll learn about hash functions later.
 * Both of the systems used in this file are beyond awful for several reasons 
*/

/* const parameter:
 * This method takes in a vector, and returns a secret int
 * To save time and space, we pass the vector in by reference.
 * But I want to guarantee my clients that their data will be unchanged
 * I can do this with a const parameter!
*/
int secretInt(vector<int> const & input){
	int pw = 0;
	for(int i = 0; i < input.size(); i++){
		if(i % 2 == 0) pw += input[i];
		else pw -= input[i];
	}

	/* I want to change input to hide what led to my password
	   But I can't, because of const!
	*/
	//input[0] = -1; //ERROR: input is read-only
              
	return pw; 
}

/* const return:
 * I plan to generate a secret vector from a given integer-
 * Perhaps my clients will use this feature to generate more (highly secure!)
 * secret integers?
 * 
 * I also have designed a system for disposing of secret vectors (see below)-
 * but I won't want my clients to immediately create and destroy vectors
 * all at once. The const return type stops my clients from doing this!
*/
const vector<int> secretVector(int input){
	vector<int> pw;
	int mult = 1;
	int mod = 10;
	while(input != 0){
		int temp = (input % mod);
		pw.push_back((temp * mult)/(mod/10));
		input -= temp;
		mod*= 10;
		mult++;
	}
	return pw;
}

//Helper printer method
void printVector(vector<int> const & input){
	for(int i = 0; i < input.size(); i++){
		cout << input[i] << " ";
	}	
	cout << endl;
}

//Destroy our secret vector
void wipeVector(vector<int> & input){
	for(int i = 0; i < input.size(); i++){
		input[i] = 0;
	}
}

int main(){
	cout << "const return test" << endl;
	vector<int> code = secretVector(1273);
	printVector(code);

	cout << "const parameter test" << endl;
	cout << secretInt(code) << endl;

	cout << "testing both" << endl;
	//The compiler has no problem with this- 
	//the generated vector is not modified
	cout << secretInt(secretVector(2351)) << endl;
	//Candidate function not viable - would lose const qualifier
	//wipeVector(secretVector(4992));
	
	return 0;
}
