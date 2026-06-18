// 5 Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them


#include<iostream>
using namespace std;
int main()
{
	// Constant declaration 
	const double PI = 3.14159;
	
	 // Variables
	string name = "Bhavya";
	int age = 20;
	char grade = 'A';
	float height = 5.9;
	
    //operations on variables
	age = age + 5;
	height = height + 0.5;
	
	cout << "Name :" << name << endl;
	cout << "Age after 5 year : " << age << endl;
	cout << "Grade : " << grade << endl;
	cout << "Height after 5 year :" << height << endl;
	
	// Using constant
	double radius = 10;
	double area = PI * radius * radius;
	
	cout << "Circle area with Radius : " << radius << " = " << area << endl; 
	 
	
}
