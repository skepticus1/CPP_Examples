// PassByReferenceWithPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//function prototypes
void PassByValue(int x);
void PassByReference(int *x);

int main()
{

	int betty = 13;
	int sandy = 15;
	int debby = 16;

	PassByValue(betty);
	PassByReference(&sandy);
	
	cout << "betty = " << betty << endl;
	cout << "sandy = " << sandy << endl;

}


void PassByValue(int x) {
	x = 99;
}

void PassByReference(int *x) {
	*x = 66;
}
