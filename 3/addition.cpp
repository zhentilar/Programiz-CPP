#include <iostream>
using namespace std;

int main()
{
	int first_number, second_number, sum;
	
	cout << "Enter two integers: ";
	cin >> first_number >> second_number;
	
	//sum of two numbers is stored in variable sum
	sum = first_number + second_number;

	//prints sum
	cout << first_number << " + " << second_number << " = " << sum;

}
