#include <iostream>

using namespace std;

//A parameter example featuring pass by value

struct Clock{
	int hour;
	int minute;
	int second;
};

int getTime(Clock c){
	return (c.hour * 10000) + (c.minute * 100) + c.second;
}

void printTime(Clock c){
	int time = getTime(c);
	cout << time/10000 << ":" << (time%10000)/100 << ":" << time % 100 << endl;
}

//(Attempt to) run up the clock by a minute
void incrementMinute(Clock c){
	c.minute++;
	if(c.minute == 60){
		c.minute = 0;
		c.hour++;
		if(c.hour == 24) c.hour = 0;
	}
}

int main(){
	//Initialize digital
	Clock digital;
	digital.hour = 3;
	digital.minute = 14;
	digital.second = 15;

	//attempt to increment the time on digital. Pass by value fails us!
	printTime(digital);
	incrementMinute(digital);
	printTime(digital);

	//It doesn't work for pointers, either!
	//Clocks have no dynamic memory, so we can use the default constructor
	Clock * pointer = new Clock(digital);
	incrementMinute(*pointer);
	printTime(*pointer);
	return 0;
}
