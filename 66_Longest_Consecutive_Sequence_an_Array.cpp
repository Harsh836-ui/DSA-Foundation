#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int hashEff(int a[], int n ) {

	unordered_set<int>st;

	for (int i = 0 ; i < n ; i++)
		st.insert(a[i]);

	int maxLen = 1;
	for (int i = 0 ; i < n ; i++) {
		int curr = a[i];
		int streak = 0 ;

		if (st.find(curr - 1) == st.end()) {
			while (st.find(curr) != st.end()) {
				curr++;
				streak++;

			}

			maxLen = max(maxLen, streak);
		}
	}
	return maxLen;
}

int MyBruteOne(int a[], int n ) {  // T.C = O(n log n)
	sort(a, a + n);
	int maxL = 1, currL = 1;
	int prev = a[0];

	for (int i = 1 ; i < n ; i++) {
		if (a[i] == prev + 1) {
			currL++;
		}
		else if (a[i] != prev) {
			currL = 1 ;
		}

		prev = a[i];
		maxL = max(maxL, currL);
	}

	return maxL;
}

bool isExists(int a[], int n, int find) {
	for (int i = 0 ; i < n ; i++) {
		if (a[i] == find)
			return true;
	}

	return false;
}

int MyBrutetwo(int a[], int n ) { //T.C = O(n²)
	int start, ml = 1;
	for (int i = 0 ; i < n ; i++) {
		start = a[i];
		int cl = 1;
		while (isExists(a, n, start + 1)) {
			start++;
			cl++;
		}
		ml = max(ml, cl);
	}
	return ml;
}

int main()
{
	int a[] = {100, 4, 200, 1, 3, 2};
	int n = sizeof(a) / sizeof(a[0]);


	// cout << MyBruteOne(a , n);
	// cout << MyBrutetwo(a, n);
	cout << hashEff(a , n);
	return 0;
}