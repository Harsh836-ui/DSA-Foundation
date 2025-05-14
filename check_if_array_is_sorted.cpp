#include <iostream>
#include <climits>
using namespace std;

bool isSorted(int a[], int n) {
	for(int i = 1 ; i < n ; i++) {
		if(a[i] <a[i-1])
			return false;
	}

	return true;
}
int main()
{
	int a[] = {5 , 4 , 6 , 7 ,8};
	int n = 5;


	cout << boolalpha << isSorted(a, n);

	return 0;
}