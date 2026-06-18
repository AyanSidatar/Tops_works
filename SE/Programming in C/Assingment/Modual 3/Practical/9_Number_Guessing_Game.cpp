// Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.


#include<iostream>
using namespace std;

int main()
{
 	int guess=55;
 	
 	
 	
 	cout << "Enter Your Guess Number :" << endl;
 	do{
	 
	 cin >> guess;
	 
	 if(guess >55)
	 {
	 	cout << " Value is High " << endl;
		 }	
	 else if(guess < 55)
	 {
	 	cout << "Value is Low " << endl;
		  }	 
	else
	{
		cout << "Congratulation You Guess Currect" << endl;
		  }	  
		  
}while(guess != 55);
}