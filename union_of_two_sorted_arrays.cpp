#include <iostream>
#include <set>
#include <map>
#include <vector>
#define nline '\n'
using namespace std;

vector<int>unionUsingSet(int a1[], int a2[], int n, int m) { //1.Using set
	set<int>s;
	vector<int>uni;

	for(int i = 0 ; i < n ; i++)
		s.insert(a1[i]);

	for(int i = 0 ; i < m ; i++)
		s.insert(a2[i]);

	for(auto it : s)
		uni.push_back(it);

	return uni;
}

vector<int>unionUsingMap(int a1[], int a2[], int n, int m) { //2.Using map
	map<int, int > mp;
	vector<int>uni;

	for(int i = 0 ; i < n ; i++)
		mp[a1[i]]++;

	for(int i = 0 ; i < m ; i++)
		mp[a2[i]]++;

	for(auto it : mp)
	{
		if(it.second > 0)
			uni.push_back(it.first);
	}
	return uni;
}

vector<int>unionUsingTwoPointers(int a1[], int a2[], int n, int m) {

	vector<int>uni;

	int i = 0, j = 0;
	while( i < n && j < m) {
		if(a1[i] < a2[j]) {
			if(uni.empty() || uni.back()!= a1[i]) { // v.back() :it returns a reference to the last element of the vector
				uni.push_back(a1[i]); //v.empty() : to check if the vector is empty or not
			}
			i++; //outside the if // always move forward, even if we don't insert , otherwise for duplicates it will stuck in infinite loop if you write it inside the while if block
		}

		else if(a1[i] > a2[j])
		{
			if(uni.empty() || uni.back()!= a2[j]) { // If the vector is empty: we push the first element ,, If not empty: we check whether the last element is a duplicate or not.
				uni.push_back(a2[j]);
			}
			j++;
		}

		else { //a1[i] ==a2[j]

			if(uni.empty() || uni.back()!= a1[i]) { //insert either of the two array element but move both pointer
				uni.push_back(a1[i]);
			}
			i++;
			j++;

		}
	}

	while(i < n) //if any elements are left you insert them
	{
		if(uni.empty() || uni.back()!= a1[i])
		{
			uni.push_back(a1[i]);
		}
		i++;

	}

	while(j < m)
	{
		if(uni.empty() || uni.back()!= a2[j])
		{
			uni.push_back(a2[j]);
		}
		j++;

	}

	return uni;

}

void printVec(vector<int>v) {
	for(auto it : v)
		cout << it << " ";
}

int main()
{
	int n = 5, m = 5;
	int a1[n] = {1,2,3,4,5};
	int a2[m] = {2,3,4,4,5};

	vector<int>uni1 = unionUsingSet(a1, a2, n, m); //Using set

	printVec(uni1);
	cout << nline;

	vector<int>uni2 = unionUsingMap(a1, a2, n, m); //using map

	printVec(uni2);
	cout << nline;

	vector<int>uni3 = unionUsingTwoPointers(a1, a2, n, m); //Using Two Pointers

	printVec(uni3);



	return 0;
}