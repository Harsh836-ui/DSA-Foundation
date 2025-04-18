#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool HashAna(string s1 , string s2){
    
    if(s1.length() != s2.length()) return false;
    
    unordered_map<char , int > mp;
    
    for(auto it : s1)
        mp[it]++; //increment frequency of that char
        
    for(auto it : s2)
        mp[it]--; //decrement frequency of that char 
        
    for(auto it : mp)
        if(it.second != 0 ) return false;
        
    return true;    
}
bool bruteAna(string s1, string s2) {
	if(s1.length() != s2.length()) return false;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	return(s1==s2);
}
int main()
{
	string s1 = "triangle";
	string s2 = "integral";

// 	cout << bruteAna(s1, s2);
	cout << HashAna(s1 , s2);
	return 0;
}