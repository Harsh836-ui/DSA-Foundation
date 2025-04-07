#include<iostream>
#include <string>
#define nline '\n'
using namespace std;

void countBrute(string s) {
	int vowel = 0, consonent = 0;
	for(auto ch : s) {
		ch = tolower(ch);  //works on one character at a time, not the whole string.
		if(isalpha(ch)) { //is alpha onlychecks for alphabet , all other will be false (spaces,puncutatoni symbols etc)
			if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u') vowel++;
			else
				consonent++;
		}
	}

	cout << vowel << " " << consonent;
}
int main()
{
	string s;
	getline(cin, s);

	countBrute(s); //allows input like "Hello World" cuz cin>> dont read after space in input


	return 0;
}