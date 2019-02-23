// addition.cpp
// Displays the sum of two numbers.
#include <iostream>
using namespace std;

int main()
{
	int number1; // first number to add
	int number2; // second number to add
	int sum; // sum of number1 and number2

	cout << "Enter first integer: "; // prompt 
	cin >> number1; // read first number from user

	cout << "Enter second integer: "; // prompt 
	cin >> number2; // read second number from user

	sum = number1 + number2; // add numbers, then store total in sum

	cout << "Sum is " <<  sum << endl; // display sum
	system("pause");
} // end main
