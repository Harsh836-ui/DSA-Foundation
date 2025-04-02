#include<iostream>
#include<string>
using namespace std;

int main()
{

	string word;
	cin>>word;
	string w = word;
	int n = word.size();
	for(int i = 0 ; i < n/2 ; i++) {
		swap(w[i],w[n-i-1]);
	}
	(w == word)?cout <<"Palindrome" :cout <<"Not Palindrome";

	return 0;
}