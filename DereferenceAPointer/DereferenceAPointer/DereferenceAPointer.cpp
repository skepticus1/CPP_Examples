// DereferenceAPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

	int score(100);
	int *score_ptr(&score);

	/*
	dereferecne score_ptr means to get the data 
	that the pointer is pointing to, not get the
	address
	*/
	
	//will print the value of score
	cout << "score_ptr points to value: " << *score_ptr << endl;
	
	//will change the value of score to 200
	cout << "*score_ptr = 200" << endl;
	*score_ptr = 200;
	cout << "score_ptr points to value: " << *score_ptr << endl;
	cout << "score value is: " << score << endl;
	//prints the addr that score_ptr is pointed to
	cout << "score_ptr points to addr: " << &score_ptr << endl;
	cout << "score_ptr value is: " << score_ptr << endl;
	cout << "score addr is: " << &score << endl;
	cout << "As you can see score_ptr value is the address of score" << endl;



	/// =====================
	double HighTemp(100.7);
	double LowTemp(37.4);
	double *TempPtr(&HighTemp);

	cout << *TempPtr << endl; // 100.7
	TempPtr = &LowTemp; // now TempPtr now points to lowtemp
	cout << *TempPtr << endl; //37.4

	///==========================
	string name("Frank");
	string *StringPtr(&name); //holds the addr of name
	cout << *StringPtr << endl; //prints "Frank"
	cout << StringPtr << endl;
	name = "James";
	cout << *StringPtr << endl; // prints "James"
	cout << StringPtr << endl;

	///===========================
	vector<string> Stooges{ "larry", "moe", "curly" };
	vector<string> *VectorPtr = nullptr;

	VectorPtr = &Stooges;

	// need the () around vectorptr because the . has
	// higher precidence than the *vector
	cout << "first stooge: " << (*VectorPtr).at(0) << endl; //larry
	cout << "stogges: ";

	for (auto Stooge : *VectorPtr)
		cout << Stooge << " ";
	cout << endl;

	cout << endl;
	return 0;
}

