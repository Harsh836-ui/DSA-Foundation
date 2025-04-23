#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int Second_largest_sort(vector<int>a , int n){ 
    sort( a.begin() , a.end()); //in case of array do sort(a , a+n);
    
    return a[n-2];
}
int myMethod(vector<int>a , int n){ //O(N) in one pass find the largest number then in 2nd pass find the largest again but ignore the first largest by doing a[i]!=first_max...then the condition
    int maxx = INT_MIN; int maxx2= INT_MIN;
    for(auto it : a)
        maxx = max(maxx ,it);

   
    for(int i = 0 ; i < n ; i++){
        if(a[i]!=maxx){
            maxx2 = max(maxx2 , a[i]);
        }
    }
    
    return maxx2;
}
int main()
{
    vector<int>a = {10, 20, 4, 45, 99};
    int n  = a.size();
    
    // cout << Second_largest_sort(a , n);
    cout << myMethod(a , n);
    
    return 0;
}