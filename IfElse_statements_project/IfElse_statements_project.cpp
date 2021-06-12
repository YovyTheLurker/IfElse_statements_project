// IfElse_statements_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  //User enters integer number
	//Program writes out wheather the number is even or odd
	int number;
	cout << "Please, enter a whole number: ";
	cin >> number;
	if (number % 2 == 0) {
		cout << "You have entered an even number.";
	}
	else {
		cout << "You have entered an odd number.";

	}
	cout << "\nThanks!";


	system("pause>0");
}

