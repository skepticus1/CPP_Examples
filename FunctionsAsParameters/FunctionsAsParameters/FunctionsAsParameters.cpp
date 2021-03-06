// FunctionsAsParameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

/*
parameters always have values, even as a reference
only functions that have values can be passed in as
parameters. void functions can not be passed in as
paramters.
*/

//function declaration
void askUserName(string&);
// askUserName - set name of user
// @param string& - name of user

int askUserScore();
// askUserScore - sets credit score of user
// @return int - credit score of user

void print(string, int);
// print - prints user name and score
// @param string - name of user
// @param int - credit score of user

int main()
{

	string name;
	
	askUserName(name);

	print(name, askUserScore());

	return 0;
}

void askUserName(string& name) {
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
}
int askUserScore() {
	int newScore;
	cout << "Enter your credit score: " << endl;
	cin >> newScore;
	cout << endl;
	return newScore;
}
void print(string newName, int newScore) {
	cout << "You name is: " << newName << endl;
	cout << "Your score is: " << newScore << endl;
}