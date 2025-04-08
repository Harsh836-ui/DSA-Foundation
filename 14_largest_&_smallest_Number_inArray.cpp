#include <iostream>
using namespace std;
int main()
{
	int n = 5;
    // 	cin>>n;
	int arr[n] = {4, 7, 1, 8, 5};
	/*for(int i = 0 ; i < n ; i++) {
		cin>>arr[i];
	}*/

	int maxx = arr[0];
	int minn = arr[0];
	for(auto it : arr)
	{
		maxx = max(maxx, it);
		minn = min(minn, it);
	}

	cout << "Max: " << maxx << "\nMin: " << minn << endl;
	return 0;
}