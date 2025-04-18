#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int base, expo;
	cin>>base>>expo;

	// cout << pow(base , expo); // using pow() function

	long long res = 1;
	while(expo) {
		res *= base;
		expo--;
	}

	cout << res;


	return 0;
}