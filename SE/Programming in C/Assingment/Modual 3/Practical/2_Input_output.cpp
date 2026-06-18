//  Basic Input/Output
//  Write a C++ program that accepts user input for their name and age and then
//  displays a personalized greeting.
//  Objective: Practice input/output operations using cin and cout.

#include<iostream>
using namespace std;
int main()
{
	string a;
	int b;
	cout << "Enter Your Name " << endl;
	cin >> a;
	cout << "Enter Your Age " << endl;
	cin >> b;
	
	cout << "Your Name is : " << a << endl;
	cout << "Your Age is : " << b << endl;
}
