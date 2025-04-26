#include <iostream>
using namespace std;
int gcd(int a, int b) {

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
	int arr[] = {12, 24, 36};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = arr[0]; // note initialise result from arr[0] & start the loop from 1
	for(int i = 1 ; i < n ; i++)
	{
		result = gcd( arr[i], result);
	}

	cout << result;
	return 0;
}