// Write a C++ program that calculates the factorial of a number using recursion.


#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0 || n == 1){
		return 1;
	}else{
		return n * fact(n-1);
	}
}
	
int main()
{
	int num;
	cout << "Enter Your Number :" << endl;
	cin >> num;
	
	if(num < 0) {
        cout << "Negative numbers is not defined." << endl;
    } else {
        cout << "Factorial of " << num << " is " << fact(num) << endl;
    }
   
	
	}	

