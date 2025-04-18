#include <iostream>
#include <set>
using namespace std;

/*void Printdivisors(int n){METHOD 1
//method using root n but will print not in sorted order
    for(int i = 1 ; i * i <= n ;i++){
        if(n%i == 0){
            cout << i << " ";
            
            if(i != n/i) //to avoid printing divisor twice in case of perfect square
            cout << n/i  <<" ";
        }
    }
}*/
int main()
{
    int n ;
    cin>>n;
    
    // Printdivisors(n);
    set<int>s; //Method 2 : Using set
    for(int i = 1 ; i*i <= n; i++){
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);  //here we dont need to worry about repeating the value in case of perfect square as set store unique element
        }
    }
    
    for(auto it : s)
        cout << it << " ";
    return 0;
}