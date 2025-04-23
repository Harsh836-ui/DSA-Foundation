#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool isUnique(string str) {
	unordered_set<char>s;
	for(auto ch : str) {
		if(s.count(ch)) return false;
		s.insert(ch);
	}
	return true;
}
int main()
{
	string s = "abcabcbb";
	int n = s.size();
	string ml = ""; //in this we will store the max length substring with unique characters 
	for(int i = 0 ; i < n ; i++) {
		for(int j = i ; j < n ; j++) {
			string t = s.substr(i, j-i + 1);
			if(isUnique(t)) {
				if(t.size() > ml.size()) {
					ml = t;
				}
			}
		}
	}

	cout << ml;
	return 0;
}