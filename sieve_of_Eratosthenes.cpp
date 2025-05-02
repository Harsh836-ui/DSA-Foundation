#include <iostream>
#include <vector>
using namespace std;

void SievePrime(int n ) {
	vector<bool>Prime(n + 1, true);

	for (int i  = 2 ; i * i <= n; i++) {
		if (Prime[i]) {
			for (int j = i * i ; j <= n; j += i ) {
				Prime[j] = false;
			}
		}
	}

	for (int p = 2 ; p <= n ; p++) {
		if (Prime[p]) {
			cout << p << " ";
		}
	}
}

int main()
{
	int n = 100;
	SievePrime(n);
	return 0;
}