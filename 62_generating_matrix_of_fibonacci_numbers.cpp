#include <iostream>
using namespace std;
int fib(int n) { 
	if(n<=1) return n;

	return fib(n-1) + fib(n-2);
}

void NaivePrintFibo(int n ) { //O(2^(n²)) (very slow) 
	int k = 0;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cout << fib(k++) << " ";
		}
		cout << "\n";
	}
}

void EfficientPrint(int n ) { //In this method we dont use recursive function we directly print in loop each cell O(1) work for n * n cells
	int a = 0, b = 1 ;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cout << a << " "; //if you dont want to print but in case you want to store use matrix a[i][j] and read more about that 
			int c = a + b ; 
			a = b;
			b = c;
		}
		cout << "\n";
	}
}
int main()
{
	int n;
	cin >> n ;

	// 	NaivePrintFibo(n);
	EfficientPrint(n);
	return 0;
}