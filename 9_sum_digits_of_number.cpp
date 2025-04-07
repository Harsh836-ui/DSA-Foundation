#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<0) n = -n; //if number is negative turn to positive
    
    int sum = 0;
    int n1 =n;
    
    while(n1){
        int ld= n1%10;
        sum+=ld;
        
        n1 = n1 /10;
    }
    
    cout << sum;
    return 0;
}