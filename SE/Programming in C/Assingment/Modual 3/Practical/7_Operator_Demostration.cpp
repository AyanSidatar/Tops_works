//7 Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.


#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=5;
	
//	Arithmetic Operators
	cout << "********Arithmetic Operators*********"<<endl;
	int sum = a+b;
	cout << "Sum is :" << sum <<endl;
	
	int sub = a-b;
	cout << "Sub is :" << sub <<endl;
	
	int multi = a*b;
	cout << "Multi is :" << multi <<endl;
	
	int div = a/b;
	cout << "Div is :" << div <<endl;
	
	int mod = a%b;
	cout << "Mod is :" << mod <<endl;
	
//	Relational Operators

	cout << "********Relation Operators*********"<<endl;
	cout << "a == b : " << (a == b) << endl;  
    cout << "a != b : " << (a != b) << endl;  
    cout << "a > b  : " << (a > b)  << endl;  
    cout << "a < b  : " << (a < b)  << endl;  
    cout << "a >= b : " << (a >= b) << endl;  
    cout << "a <= b : " << (a <= b) << endl;
	
	
	cout << "********Logical Operators*********" << endl;
    cout << "(a > b) && (b > 0) : " << ((a > b) && (b > 0)) << endl;
    cout << "(a < b) || (b > 0) : " << ((a < b) || (b > 0)) << endl;
    cout << "!(a < b)           : " << (!(a < b)) << endl;

    //  Bitwise Operators 
    cout << "********Bitwise Operators********" << endl;
    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

}

