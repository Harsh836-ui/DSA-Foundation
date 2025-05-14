#include <iostream>
#include <algorithm>
using namespace std;
 
void reverse (int a[] , int s , int e ){
    while(s <= e){
        swap(a[s] , a[e]);
        s++;
        e--;
    }
} 

void rotateLeftK(int a[] , int n , int k){
    k = k % n; //if k greater than n , then its the same thing as this
    reverse(a , 0 , k - 1);
    reverse(a , k , n - 1);
    reverse(a , 0 , n - 1);
}

void rotateRightK(int a[] , int n , int k){
    k = k % n;
    reverse(a , 0 , n-k-1);
    reverse(a , n - k , n - 1);
    reverse(a , 0 , n-1);
}

int main()
{
    int n =6;
    int a[n] = {3 , 7 , 8 , 9 , 10 , 11};
    int k = 3;
    
    /*rotateLeftK(a , n , k); //Left Rotate array By K elements
    for(auto it : a)
        cout << it << " ";*/
        
    rotateRightK(a , n , k); //Right Rotate by K elements
    for(auto it : a)
        cout << it << " ";
    return 0;
}