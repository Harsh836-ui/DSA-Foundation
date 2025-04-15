#include <iostream>
using namespace std;

void selection_sort(int a[], int n) {
	for(int i = 0 ; i < n ; i++) { //outer loop runs from 0 to last
		int mini = i; //we assume this index as minimum

		for(int j = i+1 ; j < n ; j++) { //then we inner loop from i+1 to n and find the smallest value then swap it with our index which is running in outer loop
			if(a[mini] > a[j]) {
				mini = j;
			}
		}

		swap(a[i], a[mini]);
	}
}

void bubble_sort(int a[], int n) {
	for(int i = 0 ; i <n-1 ; i++) {
		for(int j = 0 ; j < n-1 ; j++) {
			if(a[j] > a[j+1]) swap(a[j], a[j+1]);
		}
	}
}

void insertion_sort(int a[], int n) {
	for(int i = 1 ; i <n ; i++) {
		int key = a[i];
		int j = i-1;
		while(j>=0 && a[j] > key) { //as long as a[j] > key keep shifting and j decrese in every shift
			a[j+1] = a[j];
			j--;
		}

		a[j+1] = key;
	}
}
int main()
{

	int a[] = {7, 5, 9, 2, 8};
	int n = sizeof(a) / sizeof(a[0]);
	// selection_sort(a, n);
	// 	bubble_sort(a, n);

	insertion_sort(a, n);
	for(auto it : a)
		cout << it << " ";
	return 0;
}