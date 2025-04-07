#include <iostream>
using namespace std;
#define nline '\n'

int lcmBrute(int a, int b) {
	int c = max(a, b);

	for(int i = c; i <=a * b; i++) {
		if(i% a ==0 && i % b ==0) {
			return i;
		}
	}

	return a * b;  // LCM of two numbers is always b	$ a * b, and in the worst-case, it's exactly a * b
}
//this is the same function we used in our gcd program so and here will be used .for referance see the gcd program
int gcdEff(int a, int b) { //The GCD of two numbers a and b (where a > b) is the same as the GCD of b and a % b Keep replacing the bigger number with the remainder of dividing the bigger by the smaller, until the remainder becomes 0.
	int n1 = max(a,b);
	int n2 = min(a,b);
	while(n2!=0) {
		int rem = n1%n2;
		n1 = n2;
		n2 = rem;
	}

	return n1;
}


int main() {
	int a, b;
	cin>>a>>b;

	cout << lcmBrute(a, b) << nline;
//-----Efficient WAY : use the formula-----

	int lcm = (a * b) / gcdEff(a, b);

	cout << lcm;

	return 0;
}