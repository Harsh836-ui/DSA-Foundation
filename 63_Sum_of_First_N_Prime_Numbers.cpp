#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n ) {
	if (n <= 1) return false; // 0 and 1 are not prime
	for (int i = 2 ; i * i <= n ; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int bruteSumPrime(int n) {
	int count = 0, sum = 0, i = 2;
	while (count != n) {
		if (isPrime(i)) {
			sum += i;
			count++;
		}
		i++;
	}
	return sum;
}

int SieveEfficient(int n ) {
	int l = 20 * n; //we take limit approx as this
	vector<bool>sieve(l + 1, true);
	sieve[0] = sieve[1] = false;

	for (int p = 2 ; p * p <= l ; p++) {
		if (sieve[p]) {
			for (int i = p * p ; i <= l ; i += p) {
				sieve[i] = false;
			}
		}
	}
	int count = 0, sum = 0, i = 2;
	while (count != n) {
		if (sieve[i]) {
			sum += i;
			count++;
		}
		i++;
	}
	return sum;
}
int main()
{
	int n = 4;

// 	cout << bruteSumPrime(n);
	cout << SieveEfficient(n);
}