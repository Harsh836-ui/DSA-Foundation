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

int EffPerf( int n ) {
	int sum = 0;
	for (int i = 1 ;  i <= n / 2 ; i++) {
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int MostOptimisedPerf(int n) {

	int sum = 0;

	for (int i = 1 ; i * i <= n; i++) {
		if (n % i == 0)
		{
			int pair_div = n / i ;

			if (i == 1)  sum += i; //in case of pair (1 , n) dont include n /i as it will be the number itself and we dont want that in perfect number
			else if (i == pair_div) sum += i; //in case of perfect square dont add n/i as it will be repeated
			else
				sum = sum + i + pair_div;
		}
	}

	return sum ;
}
int main()
{
	//for a perfect number , sum of divisors of the number(excluding number itself) must be equal to the number
	int n;
	cin >> n;

	// int sum = brutePerf(n);
	// int sum = EffPerf(n);

	int sum = MostOptimisedPerf(n);
	(sum == n) ? cout << "Perfect" : cout << "Not Perfect";

	return 0;
}