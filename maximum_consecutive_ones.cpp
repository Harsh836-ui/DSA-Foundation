#include <iostream>
using namespace std;
int main()
{
    int a[] = {1 , 1 , 0 , 1 , 1 , 1};
    int n = sizeof(a) / sizeof(a[0]);
    
    int curr = 0 , max_L = 0;
    for(auto it : a){ //loop through the array , if current element is 1 you incre curr , if curr element is 0 you reset curr to 0
        if(it == 1){
            curr++;
        }
        else
            curr=0;
            
        max_L = max(curr , max_L);    //at every iteration calculate max of curr and max_L
    }
    
    cout << max_L; 
    
    
    return 0;
}