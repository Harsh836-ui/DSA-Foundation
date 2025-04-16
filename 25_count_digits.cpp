#include <iostream>
using namespace std;
int countDigits(int n) {
	int num = n;
	int count = 0;
	if(n==0) return 1;  //edge case if number is 0 then digits will be 1 as 0 is one digit number
	while(num) {
		num/=10;
		count++;
	}
        
	return count;
}
int main()
{
	int n;
	cin >> n;

	cout<<"Number of Digits: " << countDigits(n);

	return 0;
}