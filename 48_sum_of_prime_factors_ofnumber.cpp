#include<iostream>
#include<set>
using namespace std;

bool isPrime(int n ) {
	if(n==0 || n==1) return false;
	for( int i = 2 ; i * i <= n; i++) { //must use = to include the last one too
		if(n%i==0)
			return false;
	}
	return true;
}

int EffSumPrime(int n) {
	int sum = 0;
	for(int i = 2; i * i <= n ; i++) {
		if(n%i == 0)
		{
			if(isPrime(i))
				sum+=i;

			if((i != n/i) && isPrime(n/i)) //imp
				sum+=(n/i);
		}
	}

	return sum;
}

void SetSumPrime(int n) { //if you want to store also , then set method to also avoid same factor again
	int sum = 0;
	set<int>s;
	for(int i = 1 ; i * i <= n ; i++) {
		if(n % i == 0) {
			if(isPrime(i))
				s.insert(i);
			if(isPrime(n/i))
				s.insert(n/i);
		}
	}
	for(auto it : s)
	{
		cout << it <<" ";
		sum+=it;
	}

	cout <<"->Sum of these prime factors is :" <<sum;
}
int main() {
	int n;
	cin>>n;

	cout << EffSumPrime(n);
// 	SetSumPrime(n);

}