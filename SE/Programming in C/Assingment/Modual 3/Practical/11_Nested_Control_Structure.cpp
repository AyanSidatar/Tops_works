// Write a program that prints a right-angled triangle using stars(*) with a nested loop

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter Your Choice No :" << endl;
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
