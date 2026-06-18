//8 Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.


#include<iostream>
using namespace std;
int main()
{
	int marks;
	
	cout << "Enter 1 Subject Marks :" << endl;
	cin >> marks;
	
	if(marks >= 90)
	{
		cout << "Grade : A" << endl; 
	}
	else if(marks >= 80 )
	{
		cout << "Grade : B" << endl;
	}
	else if(marks >= 70)
	{
		cout << "Grade : C" << endl;
	}
	else if(marks >= 60)
	{
		cout << "Grade : D" << endl;
	}

	else{
		cout << "Fail" << endl;
	}
	
	
}
