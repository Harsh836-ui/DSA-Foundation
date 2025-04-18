#include <iostream>
#include <unordered_map>
using namespace std;

int digit_countHash(int n, int digit) {
	int num = n;
	unordered_map<int, int> mp;
	while(num) {
		int d = num % 10;
		mp[d]++;
		num/=10;
	}

	return mp[digit];
}

int digit_count(int n, int digit) {
	int num = n;
	int count = 0;
	while(num) {
		int d = num % 10;
		if(d==digit) count++;
		num/=10;
	}

	return count;
}

int main()
{
	int n,dig;
	cin>>n>>dig;

// 	cout << "Count of " << dig <<" in number " <<n<<" is: "<<digit_countHash(n, dig);

	cout << "Count of " << dig <<" in number " <<n<<" is: "<<digit_count(n, dig);
	return 0;
}