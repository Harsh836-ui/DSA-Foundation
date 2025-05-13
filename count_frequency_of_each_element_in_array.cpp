#include <iostream>
#include <unordered_map>
#include <vector>
#define nline '\n'
using namespace std;

void bruteCount(int a[], int n) { //Brute Force
	vector<bool>visited(n, false);

	for(int i = 0 ; i < n ; i++) {

		if(visited[i] == true)
			continue;

		int count = 1;
		for(int j = i+1 ; j < n ; j++) {
			if(a[j] == a[i]) {
				visited[j] = true;
				count++;
			}
		}
		cout << a[i] <<" Occur " <<count <<" times"<< nline;
	}
}

void effHashCount(int a[], int n) { //Efficient using hashing
	unordered_map<int,int>hash;

	for(int i = 0 ; i < n ; i++) {
		hash[a[i]]++;
	}

	for(auto it : hash)
		cout << it.first << " Occur " <<it.second<<" times" <<nline;
}
int main()
{
	int a[] = { 10, 5, 10, 15, 10, 5};
	int n = sizeof(a) / sizeof(a[0]);


// 	bruteCount(a , n );
	effHashCount(a, n );
	return 0;
}