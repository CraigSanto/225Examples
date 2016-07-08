#include <iostream>
#include <vector>

using namespace std;

//An example of returning pointers
//We convert an int to binary, and then back

//Convert an input int to a vector<int> representing binary
vector<int> * toBinary(int x){
	vector<int> temp;
	while(x >= 2){
		temp.push_back(x % 2);
		x/=2;
	}
	temp.push_back(x);
	vector<int> * ret = new vector<int>();
	for(int i = temp.size()-1; i >= 0; i--){
		ret->push_back(temp[i]);
	}
	return ret;
}

//Helper print method
void printBinary(vector<int> * & bin){
	for(int i = 0; i < bin->size(); i++){
		cout << (*bin)[i] << " ";
	}
	cout << endl;
}

//Here we return a pointer to a local variable
//Even the compiler will tell us that this is a bad idea!
int * toDecimal(vector<int> * & bin){
	int ret = 0;
	int mult = 1;
	for(int i = bin->size()-1; i >= 0; i--){
		ret += (*bin)[i] * mult;
		mult *= 2;
	}
	return &ret;
}

int main(){
	vector<int> * p = toBinary(42);
	printBinary(p);
	int * d = toDecimal(p);
	cout << *d << endl;
	return 0;
}
