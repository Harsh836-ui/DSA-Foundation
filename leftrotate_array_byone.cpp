#include <iostream>
using namespace std;

void rotateByOne(int a[] , int n ){
   int first = a[0];
	for(int i = 1 ; i < n ; i++)
		a[i-1] = a[i];

	a[n-1] = first;
}
int main()
{
	int n = 5;
	int a[n] = {1, 2, 3, 4, 5 };
	
    rotateByOne(a , n); // Optimal:just store the 1st element , shift all other left , store the first element that we stored to last posi 
    
    for(auto it : a) //Print array
		cout << it << " "; 

	return 0;
}