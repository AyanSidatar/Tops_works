// Write a C++ program to display the multiplication table of a given number using a for
// loop



#include<iostream>
using namespace std;

int main()
{
	int n,result;
	
	cout << " Enter Your Number " << endl;
	cin >> n;
	
	for(int i=1;i<=10;i++)
	{
		result = n * i;
		cout << n << "X" << i << " = " << result << endl;
	}
	
}
