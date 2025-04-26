#include <iostream>
using namespace std;
int main()
{
	int n=6;

	for(int i = 0 ; i < n ; i++) { //outer n rows
		if(i <n/2) {
			for(int j = 0 ; j < (n/2)- i ; j++)
				cout << " ";
			for(int j = 0 ; j < 2 * i + 1; j++)
				cout << "*";
		}

		else
		{
			for(int j = 0 ; j < i - n/2 + (n % 2 == 0 ? 1 : 0) ; j++)  //when n is even, we add 1 more space to shift everything right as we noticed that for even the bottom pattern was slightly before.
				cout << " ";
			for(int j = 0 ; j < 2 * (n-i-1)+ 1; j++)
				cout << "*";
		}

		cout << "\n";
	}

	return 0;
}