// PointersAndReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	/* Example 1 */
	int num = 10;
	cout << "value of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof num << endl;
	cout << "addr of num is: " << &num << endl;

	int *p;
//	cout << "\nvalue of p is: " << p << endl; // garbage
	cout << "addr of p is: " << &p << endl;
	cout << "sizeof of p is: " << sizeof p << endl;

	p = nullptr;
	cout << "\nvalue of p is: " << p << endl;

	/* Example 2 */
	int *p1(nullptr);
	double *p2(nullptr);
	unsigned long long *p3(nullptr);
	vector<string> *p4(nullptr);
	string *p5(nullptr);

	cout << "\nsizeof p1 is: " << sizeof p1 << endl;
	cout << "sizeof p2 is: " << sizeof p2 << endl;
	cout << "sizeof p3 is: " << sizeof p3 << endl;
	cout << "sizeof p4 is: " << sizeof p4 << endl;
	cout << "sizeof p5 is: " << sizeof p5 << endl;

	
	/* Example 3 */
	int score(10);
	double high_temp(100.7);

	int *score_ptr(nullptr);

	score_ptr = &score; //score_ptr = the addr of score
	cout << "value of score is: " << score << endl; // will be 10
	cout << "addr of score is: " << &score << endl; // will be the addr of score
	cout << "value of score_ptr is: " << score_ptr << endl; // will be the addr of score

}

