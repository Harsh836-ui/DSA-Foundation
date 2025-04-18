#include <iostream>
using namespace std;
bool isTrianglular(int n) { //theory in rough notes //number is triangular if its sum of first n natural numbers eg. 3 = 1 + 2 , 6 = 1 + 2 + 3
	int nsum = 0;
	int i =1;
	while(n>=nsum) {
		if(nsum == n) return true;
		nsum += i;
		i++;
	}

	return false;
}
int main()
{
	int n;
	cin >> n;
	cout << isTrianglular(n);
	return 0;
}