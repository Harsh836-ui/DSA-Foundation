#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int num = 1;
    for(int i = 0 ; i < n ; i++){ //loop through each row
        for(int j = 0 ; j< n ; j++){ //loop through each column in current row
            cout << num++ << " ";
        }
        cout << "\n";
    }
    return 0;
}