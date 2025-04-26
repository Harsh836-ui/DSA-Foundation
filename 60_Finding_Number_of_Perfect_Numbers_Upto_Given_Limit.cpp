#include <iostream>
using namespace std;

bool isPerf(int n) {

	int sum = 0;
	if (n == 1) return false;
	for(int i = 1 ; i * i <=n; i++) {
		if(n%i == 0)
		{
			int pair_div = n / i ;

			if(i == 1)  sum += i; //in case of pair (1 , n) dont include n /i as it will be the number itself and we dont want that in perfect number
			else if(i == pair_div) sum+=i; //in case of perfect square dont add n/i as it will be repeated
			else
				sum = sum + i + pair_div;
		}
	}

	return (sum == n);
}

int main()
{
	int limit = 30;
	int count = 0 ;
	for(int i = 2 ; i <=limit ; i++) {
		if(isPerf(i))
			count++;
	}

	cout << count;

	return 0;
}