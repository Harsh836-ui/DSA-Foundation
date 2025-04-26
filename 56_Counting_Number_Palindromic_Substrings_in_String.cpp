#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    string str = s;
    reverse(str.begin() , str.end());
    return(str == s);
}

int main()
{
    string s = "aaa";
    int n = s.size();
    int count = 0 ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            if(isPalindrome(s.substr(i , j - i + 1)))
                count++;
        }
    }
    cout << count;
    return 0;
}