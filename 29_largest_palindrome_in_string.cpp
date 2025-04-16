#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPalindrome(string s) {
	string rev = s;

	reverse(rev.begin(), rev.end());

	return s==rev;
}



int main()
{
	string s = "babad";
	int n = s.length();
	string res = "";

	for(int i = 0 ; i<n; i++) {
		for(int j = i; j < n ; j++) {
			string t = s.substr(i, j - i + 1); //substr(start , length)

			if(checkPalindrome(t)) {
				if(t.length() > res.length())
					res = t;
			}
		}
	}

	cout << res;
	return 0;
}