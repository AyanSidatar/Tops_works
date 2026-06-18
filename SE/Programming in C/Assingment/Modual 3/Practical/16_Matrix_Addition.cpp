// Write a C++ program to perform matrix addition on two 2x2 matrices.


#include<iostream>
using namespace std;

int main()
{
	int a[2][2],b[2][2],c[2][2];
	
	// Input 1st Matrix
	cout << "Enter Your First 4 Element :" << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++){
			cin >> a[i][j];
		}
	}
	
	// Input 2nd Matrix
		cout << "Enter Your Second 4 Element :" << endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++){
			cin >> b[i][j];
		}
	}
	
	// Addition of matrices
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++){
		 c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// Display Result
    cout << "Result Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

}
