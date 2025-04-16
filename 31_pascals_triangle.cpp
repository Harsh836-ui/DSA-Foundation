#include <iostream>
using namespace std;
int fact(int n) {
	if(n==0 || n==1) return 1;
	else
		return n * fact(n-1);
}

int ncr_Calculate(int n, int r) {
	return fact(n) / (fact(r) * fact(n-r));
}
int main() /* i notice that each row has elements like : 0c0
                                                         1c0 1c1
                                                         2c0 2c1 2c2*/
                                                         
{
	int n ;
	cin>>n;

	for(int i = 0 ; i < n ; i++) {
		for(int j =0 ; j <=i ; j++) {
			cout << ncr_Calculate(i, j) << " ";
		}
		cout << "\n";
	}
	return 0;
}