#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int missingNumXor(vector<int>v) { //3.Using XOR METHOD : O(n) , space O(1)
	int xor1= 0, xor2 = 0;

	for(int i = 1 ; i <= v.size() + 1 ; i++)
		xor1 = xor1 ^ i;

	for(int i = 0 ; i < v.size() ; i++)
		xor2 = xor2 ^ v[i];
		
	
	return xor1 ^ xor2;
}



int sumNatural(int n) {
	return
	    (n * (n+1)) / 2;
}

int missingNumOpt(vector<int>v) { //2.Using formula , TC: O(n)
	int sum = 0;
	int n = v.size() + 1; //as there is 1 missing but to have sum of all we will count all
	for(auto it : v)
		sum+=it;

	return
	    sumNatural(n) - sum;
}

int missingNumBetter(vector<int>v) { //1.Using hashing : O(n) and space O(n)
	unordered_map<int,int>mp;

	for(int i = 0 ; i < v.size() ; i++)
		mp[v[i]]++;

	for(int i = 1 ; i <= v.size() + 1; i++)
	{
		if(mp[i] == 0)
			return i;
	}

	return -1;

}

int main()
{
	vector<int>v = {1, 2, 4, 5};

	// 	cout << missingNum(v);
	// cout << missingNumBetter(v);
	cout << missingNumXor(v);

	return 0;
}