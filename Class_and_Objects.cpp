#include<bits/stdc++.h>
using namespace std;
#define nline "\n"


class Myclass {
public:
	int num;
	string name;

};

int main() {
	Myclass myObj;


	myObj.num = 25;
	myObj.name = "Harsh";


	cout << myObj.num << nline;
	cout << myObj.name;

}