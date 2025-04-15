#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
int numOfDigits(int n ) {
	int i = 0;
	while(n) {
		n= n/10;
		i++;
	}
	return i;
}

bool isArmstrong(int n) {
	int digits = numOfDigits(n);

	int n2 = n, ud, sum =0;
	while(n2) {
		ud = n2 % 10;
		sum += pow(ud, digits);
		n2 = n2/10;
	}

	return(sum == n) ?  1 : 0;
}
int main()
{
	int range[2]= {1, 500};
	int start = range[0];
	int end = range[1];

	vector<int>Arm;
	for(int i = start ; i <=end ; i++) {
		if(isArmstrong(i))
		{
			Arm.push_back(i);
		}
	}

	for(auto it : Arm)
		cout << it << " ";
	return 0;
}