#include <iostream>
using namespace std;

int brutePerf(int n) {
	int sum = 0 ;
	for (int i = 1 ; i < n ; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}

	return sum;
}

int EffbrutePerf( int n ) {
	int sum = 0;
	for (int i = 1 ;  i <= n / 2 ; i++) {
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int MostOptimisedBrutePerf(int n) { //to code this again , and rectify the mistake
	int sum = 0;
	if (n == 1)
		return 0;
	for (int i = 1 ; i * i <= n; i++) {
		if (n % i == 0)
		{
			sum = sum + i + n / i;
		}
	}

	return sum - n; //to exclude the number itself from divisors we added
}
int main()
{
	//for a perfect number , sum of divisors of the number(excluding number itself) must be equal to the number
	int n;
	cin >> n;

	// int sum = brutePerf(n);
	// int sum = EffbrutePerf(n);
	int sum = MostOptimisedBrutePerf(n);
	(sum == n) ? cout << "Perfect" : cout << "Not Perfect";

	return 0;
}