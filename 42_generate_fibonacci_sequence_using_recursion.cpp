#include <iostream>
using namespace std;

int fib(int n ) { //this function will return the ith fibonacci number
	if(n<=1) return n;

	else return fib(n-1) + fib(n-2);
}
int main()
{
	int n ;
	cin>>n;

	for(int i = 0 ; i < n ; i++)
		cout << fib(i) << " "; //call the ith fibo number

	return 0;
}