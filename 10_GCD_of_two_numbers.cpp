#include <iostream>
#include <numeric>  // for std::gcd
#define nline '\n'
using namespace std;

int gcdBrute(int a, int b) {//start from smaller of two numbers then keep going downward to check for number that divide both
	int c = min(a, b);  //to find the smaller of two numbers

	for(int i = c; i > 0 ; i--) {
		if(a%i == 0 && b%i==0)
		{
			return i;
		}
	}
	return 0;
}

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
int main()
{
	int a, b;
	cin>>a>>b;

	cout << gcd(12, 6) << nline; //use direct stl
	cout << gcdBrute(a,b) << nline;

	cout << gcdEff(a, b) << nline;

	return 0;
}