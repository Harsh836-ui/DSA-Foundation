#include<iostream>
#include<cmath>
using namespace std;
//abc = a^n + b^n + c^n...
//Armstrong number is a number where the sum of its own digits raised to the power of the number of digits equals the number itself
int numOfDigits(int n ) {
	int i = 0;
	while(n) {
		n= n/10;
		i++;
	}
	return i;
}

int main() {
    int n;
	cin>>n;
	int digits = numOfDigits(n);
	

	int n2 = n, ud, sum =0;
	while(n2) {
		ud = n2 % 10;
		sum += pow(ud, digits);
		n2 = n2/10;
	}
	
	(sum == n) ?cout << "Armstrong" :cout << "Not Armstrong"; 
}