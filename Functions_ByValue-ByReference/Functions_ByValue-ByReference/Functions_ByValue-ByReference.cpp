// Functions_ByValue-ByReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


// function: dataType nameOfFunc() {}

// Function Declarations

void value(int); //passes parameter by value
void reference(int&); //passes parameter by reference
void askUser(int&, string&);
//askUser - fill in score and name
//@param int& - the user's score
//@param string& - the user's name

/*since we are not changing values we are not passing
by reference.*/
void calculateOutcome(int, string);



int main()
{

	//example 1
	int num1 = 5;

	value(num1);
	cout << num1 << endl;

	reference(num1);
	cout << num1 << endl;

	//example 2
	int score = 69;
	string name;

	askUser(score, name);
	calculateOutcome(score, name);

	return 0;

}

/* here num1 is redeclared, IE it's a completely new instance
of num1.
keep in mind variable scope
void value (int x) {
	num1 +=10;
}
will not work because num1 isn't declared*/
void value(int num1) {
	num1 += 10;
}
/*this references the memory address of the variable num1
it's not making a new declaration.*/
void reference(int& num1) {
	num1 += 10;
}
void askUser(int& newScore, string& newName) {
	cout << "\nPlease enter your score." << endl;
	cin >> newScore;
	cout << "Please enter your name." << endl;
	cin >> newName;
}
void calculateOutcome(int score, string name) {
	cout << "\nYour score is: " << score << endl;
	cout << "Your name is: " << name << endl;
	if (score = 100)
	{
		cout << "\nCongrats, you got a perfect score." << endl;
	}

}



