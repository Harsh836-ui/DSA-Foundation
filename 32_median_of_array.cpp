#include <bits/stdc++.h>
using namespace std;

double findMedian(int a[], int n) {
	sort(a, a+n);

	if(n%2!=0) {
		return a[n / 2];
	}
	else {
		return (a[n/2 - 1] + a[n/2]) / 2.0 ;
	}

}
int main()
{
	int a[] =  {3, 1, 2, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);

	cout << "Median is: " << findMedian(a, n);
	return 0;

}