#include <iostream>
using namespace std;
int main()
{
	string s = "the numbers are 12 and 34";
	s+=' ';  //add one non digit char to end so we dont explitly do one more time as last sum was not added since we reached end of string
	int sum = 0, digit, num = 0 ;
	for(char ch : s) {

		if(isdigit(ch)) {
			digit = ch - '0';
			num = num * 10 + digit;
		}

		else {
			sum+=num;
			num = 0;
		}

	}

	cout << sum;

	return 0;
}