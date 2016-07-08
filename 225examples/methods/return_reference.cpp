#include <iostream>
#include <vector>

using namespace std;

//A simple example showcasing return by reference

int getSum(vector<int> & v){
	int sum = 0;
	for(int i = 0; i < v.size(); i++){
		sum += v[i];
	}
	return sum;
}

//Because we return a reference, we can use this method as the left side
//of an assignment statement!
vector<int> & compareSum(vector<int> & v1, vector<int> & v2){
	
	if(getSum(v1) >= getSum(v2)) return v1;
	return v2;
}

void printVector(vector<int> & v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	vector<int> a;
	vector<int> b; 
	for(int i = 1; i <= 3; i++){
		a.push_back(i);
	}
	for(int i = 4; i <= 6; i++){
		b.push_back(i*2);
	}
	while(getSum(a) != getSum(b)){
		compareSum(a, b)[compareSum(a, b).size()-1] -= 1;
		printVector(compareSum(a, b));
	}
	printVector(a);
	printVector(b);
}
