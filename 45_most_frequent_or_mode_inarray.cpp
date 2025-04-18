#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4 , 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    unordered_map<int , int >mp;
    
    for(auto it : arr)
        mp[it]++;
    
    int max_freq = 0 ; //start with minimum frequency
    int mode = -1; //
    for(auto it : mp){
        if(it.second > max_freq){
            max_freq = it.second;
            mode = it.first;
        }
    }
    
    cout << "Most Frequent Number in array is : " <<mode <<" With Frequency: " << max_freq;
    return 0;
}