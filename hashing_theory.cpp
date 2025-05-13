#include <iostream>
#include <unordered_map>
#define nline '\n' 
using namespace std;

int BrutefindCount(int number , int a[] , int n){
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == number)
            cnt++;
    }
    
    return cnt;
}

int main()
{
    int arr[] = {1, 2, 1, 3, 2};
    int query[] = {1, 3, 4, 2, 10};
    int n = 5;
    
    
   /* for(int i = 0 ; i < n ; i++){
    int number = query[i];
        cout <<number <<" " << BrutefindCount(number , arr , n) << nline;    
    }*/
    
    unordered_map<int , int>hash;
    hash[13]= {0};
    
    for(int i = 0 ; i < n ;i++){
        hash[arr[i]]+=1;
    }
    
    for(auto it : query)
        cout <<it <<" " << hash[it] << nline;
    
    return 0;
}