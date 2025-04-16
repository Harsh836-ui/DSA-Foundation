#include <iostream>
using namespace std;

int sumNatural(int n) {
	return (n*(n+1)) / 2;
}

int sumArr(int a[], int n ) {
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
		sum+=a[i];

	return sum;
}

int xorMethod(int a[], int n ) {
	int xor1=0,xor2 = 0;

	for(int i = 1 ;  i <= n ; i++)
		xor1^=i;

	for(int i = 0 ; i < n-1 ; i++)
		xor2^=a[i];

	return (xor1 ^ xor2);
}
int main()
{
	int a[] = {1, 2, 3, 5, 6}; //sequence from 1 to n
	int n = 6;

    //int miss_num = sumNatural(n) - sumArr(a, n-1);
    //cout << miss_num;

	cout << xorMethod(a, n);
	return 0;
}