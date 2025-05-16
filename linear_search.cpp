#include <iostream>
using namespace std;
int main()
{
    int target = 2;
    int a[] = {5 , 4 , 3 , 2 , 1};
    int n = sizeof(a)/sizeof(a[0]);
    bool found = false;
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] == target)
            {
                cout << "Found in Position: " <<i;
                found = 1;
                break; // stops after first match
            }
    }
    
    if(found == 0) cout << "Not Found";
    return 0;
}