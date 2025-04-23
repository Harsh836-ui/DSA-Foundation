#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void targetSumBrute(vector<int>a, int target) {

	int n = a.size();
	vector<pair<int,int>>pairs;
	for(int i = 0 ; i < n ; i++) {
		for(int j = i+1 ; j < n ; j++) {
			if(a[i] + a[j] == target)
				pairs.push_back({a[i], a[j]});
		}
	}

	for(auto it: pairs)
		cout << it.first << " " << it.second << "\n";
}

void betterTwoPointer(vector<int>a, int target) {

}
void effHashMap(vector<int>a, int target) {
	unordered_map<int, int >hash;
	for(int i = 0 ; i < a.size() ; i++) {
		int complement = target - a[i];

		if(hash[complement]) {
			cout << a[i] << " " << complement <<"\n";
		}
		hash[a[i]]++;
	}
}

void effHashSet(vector<int>a, int target) {
	unordered_set<int>s;
	for(int i = 0 ; i < a.size() ; i++) {
		int complement = target - a[i];

		if(s.count(complement))
			cout << a[i] << " " << complement << "\n";

		s.insert(a[i]);

	}
}

int main()
{
	vector<int>a = {1, 4, 2, 3, 2, 3};
	int target = 5;

	// targetSumBrute(a, target);
	// betterTwoPointer(a , target);
	// effHashMap( a, target); //Using hashmap
	effHashSet(a, target);  //using hashset
	return 0;
}