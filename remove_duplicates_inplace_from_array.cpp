#include <iostream>
#include <set>
using namespace std;

void bruteWay(int a[] , int n){
    set<int>st;
    
    for(int i = 0 ; i < n ; i++){ //inserting in set
        st.insert(a[i]);
    }
        
    int k = st.size(); int j = 0;
    
    for(auto x : st){ //filling in array 
        a[j]= x;
        j++;
    }
    
    for(int i = 0 ; i < k ; i++){ //Print array
        cout << a[i] <<" ";
    }
}

void twoPoint(int a[] , int n){ //since array is sorted , duplicates are together so we can use two pointer approach to remove duplicates
    int i = 0, j;
    for(j = 0 ;  j< n ; j++){
        if(a[j]!=a[i]){
            i++;
            a[i] = a[j];
        }
    }
    
    for(int x = 0 ; x < i + 1 ; x++) //array will have i+1 unique elements , and we didnt delete anything we just shifted the same elements
        cout << a[x] << " ";    
    
}
int main()
{
    int a[] = {1 , 1 , 2 , 2 , 3 , 4 , 4};
    int n = sizeof(a) / sizeof(a[0]);
    
    // bruteWay(a , n);    
    twoPoint(a , n);
    
    return 0;
}