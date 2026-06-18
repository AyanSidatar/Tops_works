// Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.



#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int divide(int a,int b)
{
	return a/b;
}

int main(){
	int a , b;
	char ope;
	
	cout << "Enter Your Value 1 :" << endl;
	cin >> a;
	cout << "Enter Your Value 2 :" << endl;
	cin >> b;
	cout << "Choose Your Operator(+ , - , * , / ) " << endl;
	cin >> ope;
	
	switch(ope){
		case '+' :
			cout << "Result :" << sum(a,b) << endl;
			break;
		case '-' :
			cout << "Result :" << sub(a,b) << endl;
			break;
		case '*' :
			cout << "Result :" << multi(a,b) << endl;
			break;
		case '/' :
			if(b==0)
				cout << "Error: Division by zero" << endl;
			else
				cout << "Result :" << divide(a,b) << endl;
			break;
			
		default :
			cout << "Invalid Operator" << endl;	
	}
	
}
