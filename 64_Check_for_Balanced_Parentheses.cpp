#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool BruteisBalanced(string s1) {

	while (true) {
		string s2 = s1 ; //copy original value to s2 , and in s2 we will perform things
		size_t ind;
		while ((ind = s2.find("()")) != string :: npos) {
			s2.erase(ind, 2);
		}

		while ((ind = s2.find("{}")) != string :: npos) {
			s2.erase(ind, 2);
		}

		while ((ind = s2.find("[]")) != string :: npos) {
			s2.erase(ind, 2);
		}

		if (s2 == s1) //that means nothing changed , and string is already fully balanced or string contain unmatchable brackets
			break;

		s1 = s2; //for next turn update our original value
	}

	return s1.empty();
}

bool StackParanthesis(string s) {
	stack<char>st;

	for (int i = 0 ; i < s.size() ; i++) {
		if (s[i] == '(' || s[i] == '{' || s[i] == '[' )
			st.push(s[i]);

		else if (!st.empty() && (s[i] == ')' && st.top() == '(' || s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() == '['))
			st.pop();

		else
			return false; //for mismatched or extra closing brackets
	}

	return st.empty();
}

int main()
{
	string s  = "{[()]}";

	// 	cout << boolalpha << BruteisBalanced(s);
	cout << boolalpha << StackParanthesis(s);

	return 0;
}