#include <iostream>
using namespace std;

/*int totalSum(int start, int end) {
	int sum = 0 ;
	for(int i = start ; i<=end ; i++)
		sum+=i;

	return sum;
}
int evenSumRangeBrute(int start,int end) {
	int sum = 0;

	for(int i = start ; i <= end ; i++) {
		if(i % 2 == 0)
			sum += i;
	}

	return sum;
}*/
int evenSumEff(int start, int end) {
	int first = (start % 2 == 0 )?start : start + 1;
	int last = (end % 2 == 0)? end : end - 1 ;

	int count = ((last - first )/2) + 1;

	int sum = (count*(first + last)) / 2;

	return sum;

}

int oddSumEff(int start, int end) {
	int first = (start % 2 != 0 )?start : start + 1;
	int last = (end % 2 != 0)? end : end - 1 ;

	int count = ((last - first )/2) + 1;

	int sum = (count*(first + last)) / 2;

	return sum;

}
int main()
{
	int start, end;
	cin >> start >> end;

	/*int evenSum = evenSumRangeBrute(start, end);
	int oddSum = totalSum(start, end) - evenSum;
	cout <<"Sum of Even Numbers in this range:" <<evenSum<< endl;
	cout <<"Sum of Odd Numers in this range:" << oddSum;
	*/

	int evenSumEffective = evenSumEff(start, end);
	int oddSumEffective = oddSumEff(start, end);


	cout << "Even Sum : " << evenSumEffective << "  Odd Sum: " << oddSumEffective;
	return 0;
}