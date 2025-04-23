#include <iostream>
using namespace std;
int main()
{
	int start, end;
	cin>>start >> end;

	for(int i = 1 ; i <= 10 ; i++) { //outer loop from 1 to 10 (for each row of tables)
		for(int j = start ; j <= end ; j++) { //inner loop from start to end (to print table horizontally for current row)
			cout << j << "*" << i << " = " << j * i << " ";
		}
		cout << "\n";

	}
	return 0;
}