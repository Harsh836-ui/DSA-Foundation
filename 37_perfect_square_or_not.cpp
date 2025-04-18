#include <iostream>
using namespace std;

//You can use sqrt(n) for more efficient in O(1) and for most efficient(in terms of precision) use binary search(Ologn) its slower than sqrt(n) but is better
bool perfectSquareBrute(int n) { //o(root n) TC
	if(n==1) return true;
	for(int i = 2 ; i * i <=n ; i++)
		if(i * i == n) return true;

	return false;
}

int main()
{
	int n;
	cin >> n ;

	(perfectSquareBrute(n))?cout<<"Yes Perfect Square" : cout<<"No";
	return 0;
}