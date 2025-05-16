#include <iostream>
using namespace std;

void bruteMoveZeros(int a[], int n ) {
	int temp[n];
	int j = 0; //j used to fill non zero elements in temp array
	for(int i = 0 ; i < n ; i++ ) { //fill non zero elements in temp array
		if(a[i] != 0) {
			temp[j] = a[i];
			j++; //j at the end will give count of non zero elements
		}
	}

	for(int i = 0 ; i < j ; i++) // Replace the original starting non zero elements with the element we copied in temp arr
		a[i] = temp[i];

	for(int i = j ; i < n  ; i++) //therefore now remaining n - j positions can be filled with 0's
		a[i] = 0;
}

void optimalMoveZero(int a[] , int n){ //Using two pointer
    int j=0; //to track where the non 0 element will go
    for(int i = 0 ; i < n ; i++){
        if(a[i] != 0 )
        {
            swap(a[j] , a[i]);
            j++;
        }
    }
}

int main()
{
	int a[] = {1, 0, 2, 3, 0, 4, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);

// 	bruteMoveZeros(a, n );
    optimalMoveZero(a , n);

	for(auto it : a)
		cout << it << " ";

	return 0;
}