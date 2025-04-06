#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void printNewLine(int lines  = 1)
{
	while (lines--)
		cout << nline;
}

void square(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "*";
		}
		cout << nline;
	}
}

void RightAngTng(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		cout << nline;
	}
}

void NumRightAnTng(int n) {
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		cout << nline;
	}
}

void NumRightAnTng2(int n) {
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << i;
		}
		cout << nline;
	}
}

void invRightAngTng(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			cout << "*";
		}
		cout << nline;
	}
}

void pyramid(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < n - i - 1 ; j++) {
			cout << " ";
		}
		for (int j = 0 ; j < 2 * i + 1; ++j)
		{
			cout << "*";
		}

		cout << nline;
	}
}

void invpyramid(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 ; j < i ; j++) {
			cout << " ";
		}
		for (int j = 0 ; j < 2 * n - (2 * i + 1 ); j++)
		{
			cout << "*";
		}
		cout << nline;
	}
}

void diamond(int n ) { //just mixture of pattern pyramid and rev pyramid
	pyramid(n);

	invpyramid(n);
}

void halfKiteNaiv(int n) {
	RightAngTng(n - 1 );
	int j = n;
	while (j--) {
		cout << "*";
	}
	printNewLine();
	invRightAngTng(n - 1);
}

void halfKiteBetter(int n) {


	for (int i = 1 ; i <= 2 * n - 1 ; i++) { //if you start from 0 it will print an empty line because theres 0 < 0 will be false and hence an empty line be there therefore here better to start from 1
		int stars;
		if (i <= n)
			stars = i;
		else
			stars = 2 * n - i;


		while (stars--)
			cout << "*";

		cout << nline;

	}

}

void binaryTrngle(int n) {
	int bit;
	for (int i = 0 ; i < n; i++) {
		if (i % 2 == 0) bit = 1 ;
		else bit = 0;
		for (int j = 0 ; j <= i ; j++) {
			cout << bit;
			bit = 1 - bit;
		}
		cout << nline;
	}
}

void mirrorNumber(int n) { //*imp
	for (int i = 1 ; i <= n ; i++ ) { //for outer row simple n rows
		//for inner:
		//1.for the increasing numbers:
		for (int j = 1 ; j <= i ; j++ ) {
			cout << j;
		}
		//2. for spaces in middle
		for (int j = i + 1 ; j <= (2 * n) - i ; j++ ) {
			cout << " ";
		}
		//3. for decreasing numbers
		for (int j = (2 * n) - i; j < 2 * n; j++)
		{
			cout << 2 * n - j;
		}
		cout << nline;
	}
}

void floydTriangle(int n) {
	int value = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1 ; j <= i; ++j)
		{
			cout << value++;
		}
		cout << nline;
	}
}

void alphabetTriangle(int n) {
	for (int i = 0 ; i < n ; i++) {
		for (char j = 'A'; j <= 'A' + i  ; j++)
		{
			cout << j;
		}
		cout << nline;
	}
}

void alphabetInvTngle(int n) {
	for (int i = 0; i < n; ++i)
	{
		char ch = 'A';
		for (int j = 0; j < n - i; ++j)
		{
			cout << ch++;
		}
		cout << nline;
	}
}

void alphabetTriangle2(int n ) {

	for (int i = 0 ; i < n ; i++) {
		int j = i ;
		char ch = 'A' + i;
		while (j >= 0) {
			cout << ch;
			j--;
		}
		cout << nline;
	}

}

void alphabetPyramid(int n) {
	for (int i = 0 ; i < n ; i++ ) {
		//spaces
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		char ch = 'A';
		for (int j = 0 ; j < (2 * i + 1); j++) {
			cout << ch ;

			if (j < (2 * i + 1) / 2) ch++;
			else ch--;
		}

		cout << nline;
	}
}

void reverseAlphabetRAnTg(int n) {
	for (int i = 0; i < n; i++)
	{
		char ch = 'A' + n - i;
		for (int j = 0; j <= i; ++j)
		{
			cout << ch++;
		}
		cout << nline;
	}
}

void pattern19(int n ) {
	//UPPER PART:
	for (int i = 0; i < n ; ++i)
	{

		for (int j = 0; j < n - i; ++j)
		{
			cout << "*";
		}

		for (int j = n - i ; j < n + i   ; ++j)
		{
			cout << " ";
		}

		for (int j = n  + i ; j < 2 * n; ++j)
		{
			cout << "*";
		}

		cout << nline;
	}
	//LOWER PART:
	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}

		for (int j = i + 1; j < 2 * n - i - 1 ; ++j)
		{
			cout << " ";
		}

		for (int j = 2 * n - i ; j <= 2 * n; ++j)
		{
			cout << "*";
		}
		cout << nline;
	}
}

void pattern20(int n) {
	//Upper PART:
	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}

		for (int j = i + 1; j < 2 * n - i - 1 ; ++j)
		{
			cout << " ";
		}

		for (int j = 2 * n - i ; j <= 2 * n; ++j)
		{
			cout << "*";
		}
		cout << nline;
	}
	//Lower PART:
	for (int i = 1; i < n ; ++i) // starting from 1 so not from 0 to not print the middle line twice
	{

		for (int j = 0; j < n - i; ++j)
		{
			cout << "*";
		}

		for (int j = n - i ; j < n + i   ; ++j)
		{
			cout << " ";
		}

		for (int j = n  + i ; j < 2 * n; ++j)
		{
			cout << "*";
		}

		cout << nline;
	}

}

void hollowSquare(int n ) {
	for (int i = 0; i < n; ++i)
	{
		if (i == 0 || i == n - 1) //for first and last row where n stars will be there
		{
			for (int j = 0; j < n; ++j)
				cout << "*";
		}
		else //for middle rows we have 1 star then n-2 spaces then 1 star
		{
			cout << "*";
			int j = n - 2;
			while (j--) cout << " ";

			cout << "*";
		}
		cout << nline;
	}
}
int main()
{
	int n;
	cin >> n;

	square(n);
	printNewLine();

	RightAngTng(n);
	printNewLine();

	NumRightAnTng(n);
	printNewLine();

	NumRightAnTng2(n);
	printNewLine();

	invRightAngTng(n);
	printNewLine();

	pyramid(n);
	printNewLine();

	invpyramid(n);
	printNewLine();

	diamond(n);
	//note there is a difference that when you print 2 patterns together then the line with max stars will be printed twice i.e last line of  normal pyramid and first line of inverted pyramid , but in few patterns we dont have to repeat that line so there we cant just copy and paste the code of our 2 patterns
	printNewLine();

	halfKiteNaiv(n);
	printNewLine();

	halfKiteBetter(n);
	printNewLine();

	binaryTrngle(n);
	printNewLine();

	mirrorNumber(n);
	printNewLine();

	floydTriangle(n);
	printNewLine();

	alphabetTriangle(n);
	printNewLine();

	alphabetInvTngle(n);
	printNewLine();

	alphabetTriangle2(n);
	printNewLine();

	alphabetPyramid(n);
	printNewLine();

	reverseAlphabetRAnTg(n);
	printNewLine();

	pattern19(n);
	printNewLine();

	pattern20(n);
	printNewLine();

	hollowSquare(n);
	return 0;
}