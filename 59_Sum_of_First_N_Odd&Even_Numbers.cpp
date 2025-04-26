#include <iostream>
using namespace std;
int main()
{
	int n ;
	cin >> n ;

	double oddSum = n * n ;
	double evenSum= n * (n+1);

	cout <<"Sum of first N odd numbers is : "<< oddSum <<"\n";
	cout <<"Sum of first N Even numbers is : "<< evenSum;

	return 0;

}