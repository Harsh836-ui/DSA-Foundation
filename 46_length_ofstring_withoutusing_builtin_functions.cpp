#include <iostream>
#include <string>
using namespace std;

/*int C_style_count(string s){  //This is used in c where c style strings are there(char[]);

    int ch = 0 , count = 0;
    while(s[ch]!= '\0'){
        ch++;
        count++;
    }

    return count;
}*/
int main()
{
	string s = "hello world";
	// cout << C_style_count(s);

	//----For C++ just simply loop through each character of string like this RANGE BASE OR FOR EACH LOOP--
	int count = 0;
	for(char c : s) {
		count++;
	}

	cout << count;
	return 0;
}