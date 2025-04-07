
#include <iostream>
#include <string>
#include <algorithm> //include functions like sort() , max() , reverse() , max min
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n = s.length();

	//1.USING STL:
	reverse(s.begin(), s.end());
	//2.MANUAL
	/*for(int i = 0 ; i <n/2  ; i++) { //n/2 to avoid looping twice
		swap(s[i], s[n-i - 1]);
	}*/


	cout << s;

	return 0;
}