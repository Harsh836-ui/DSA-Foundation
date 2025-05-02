#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string str = "{[()]}";

	//To declare stack:
	stack<string> cars;

	//To add elements:
	cars.push("volvo"); //you can also insert element using emplace
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	//To acess elements: //you can't acess stack elements by referring to index numbers , like you do in array vectors
	//in a stack you can only acess top element which is the last element we pushed
	// cout << cars.top();

	//you can also use .top function to change the value of the top element:
	cars.top()  = "Honda";

	cout << cars.top() << " ";
	cars.pop();

	cout << cars.top() << " ";

	cout << cars.size() << " "; // for the size of stack

	cout << cars.empty() << " "; //prints 0 or 1 if stack is empty or not
	//TO PRINT :
	while (!cars.empty()) {
		cout << cars.top() << "\n";
		cars.pop();
	}
	return 0;
}
