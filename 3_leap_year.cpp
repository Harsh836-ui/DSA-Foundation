#include <iostream>
using namespace std;

int main() {
	int year;
	cin>>year;
	// if year is divisible by 4 AND not divisible by 100
	// OR if year is divisible by 400
	// then it is a leap year
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout <<"Leap";
	else cout << "Not Leap";
}