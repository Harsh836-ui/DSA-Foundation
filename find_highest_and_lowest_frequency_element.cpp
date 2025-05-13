#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
#define nline '\n'
using namespace std;

void effHashCount(int a[], int n) { //Efficient using hashing
	unordered_map<int,int>hash;

	for(int i = 0 ; i < n ; i++) {
		hash[a[i]]++;
	}

    int max_c = INT_MIN , min_c = INT_MAX  , res1 , res2;
    for(auto it : hash){
        if(it.second > max_c){
            res1 = it.first;
            max_c = it.second;
        }
        
        if(it.second < min_c){
            res2 = it.first;
            min_c = it.second;
        }
    }
 cout << res1 << " " << res2;   
} 


int main()
{
    int a[] = { 10, 5, 10, 15, 10, 5};
	int n = sizeof(a) / sizeof(a[0]);
	
	effHashCount(a , n);

    return 0;
}