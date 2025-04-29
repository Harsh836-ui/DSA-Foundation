#include <iostream>
using namespace std;

bool isPrime(int n ) {
	if(n==0 || n==1) return false;
	for( int i = 2 ; i * i <= n; i++) {
		if(n%i==0)
			return false;
	}
	return true;
}
int BrutelargestPrimeNum(int n ) {
	int res = 0;
	for(int i = 2 ; i<= n ; i++) {
		if(n%i==0 && isPrime(i))
			res = max(res, i);
	}
	return res;
}
int EfficientLargePrimeTwo(int n ) {
	int largestPrime = -1;
	while( n % 2 == 0 ) {
		largestPrime =2;
		n = n /2 ;
	}
	int i = 3;
	while(n!=1) {
		while(n%i == 0) {
			largestPrime = i;
			n = n / i;
		}
		i = i + 2;
	}
	return largestPrime;
}

int mostEfficientLargePrime(int n) { //o(root n time) best
	int largestPrime = -1;
	while( n % 2 == 0 ) {
		largestPrime =2;
		n = n /2 ;
	}
	for(int i = 3 ; i * i <=n ; i++) { //3, 5 , 7 , 9 .....to root(n)
		while(n % i == 0) {
			largestPrime = i ;
			n = n / i;
		}
	}
	if(n>2)  //it must be a prime factor itself (larger than )
		largestPrime = n;

	return largestPrime;

}
int main()
{
	int n;
	cin >> n ;

	// 	cout << BrutelargestPrimeNum(n);
	// 	cout << EfficientLargePrimeTwo(n);
	cout << mostEfficientLargePrime(n); 
	return 0;
}
