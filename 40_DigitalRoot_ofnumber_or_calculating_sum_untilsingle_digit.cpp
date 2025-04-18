#include <iostream>
using namespace std;

/*int digitSumNaive(int n ){
    int num = n; int sum=0;
    while(num){
        int digit = num % 10;
        sum+=digit;
        num/=10;
    }

    return sum;
}*/

int digital_root_formula(int n) {
	if(n==0) return 0;

	else return ( 1 + (n- 1) % 9);
}
int main()
{
	int n ;
	cin >> n;

	/*int sum = digitSumNaive(n); //calculate for the first time
	while(sum > 9){ //then based on that value pass it in loop
	    sum = digitSumNaive(sum);
	}

	cout << sum;*/

	cout << digital_root_formula(n);
	return 0;
}