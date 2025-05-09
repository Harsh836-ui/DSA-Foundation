#include <iostream>
#include <string>
#define nline '\n'
using namespace std;

int fibonacci(int n ) { //-----Q7.Fibonaaci numbers upto N
    int res;
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool isPalindrome(string s, int start, int end) { //-----Q6.Given string is palindrome or not
    if (start >= end) return true;
    if (s[start] == s[end])
        return isPalindrome(s, start + 1, end - 1);
    else return false; //characters dont match
}

void reverseArr(int a[], int s, int e) { //-----Q5.Reverse the given array
    if (s >= e) return;
    swap(a[s], a[e]);
    reverseArr(a, s + 1, e - 1);
}

int fact(int n ) { //-----Q4.Factorial of Number
    if (n < 1 ) return 1;
    return n * fact(n - 1);
}
int sum1toN(int n) { //-----Q3.Print sum of 1 to N using recursion
    if (n == 0) return 0 ;
    return n + sum1toN(n - 1);
}

void print1toN(int n) { //-----Q2.Print 1 to N using recursion
    if (n == 0) return ;
    print1toN(n - 1);
    cout << n << " ";
}

void printNto1(int n) {//-----Q1.Print N to 1 using recursion
    if (n == 0) return ;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    int n = 5;
    cout << sum1toN(n); cout << nline; //1

    print1toN(n); cout << nline; //2

    printNto1(n); cout << nline; //3

    cout << fact(n); cout << nline; //4

    int a[] = { 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int s = 0, e = size - 1;
    reverseArr(a, s, e); //5
    for (auto it : a ) cout << it << " "; cout << nline;

    string str = "racecar"; int start = 0, end = str.size() - 1;
    cout << boolalpha << isPalindrome(str, start, end); cout << nline; //6

    for (int i = 0 ; i < 5 ; i++) { //Print fibo series
        cout << fibonacci(i) << " ";  //7
    }

    return 0;
}