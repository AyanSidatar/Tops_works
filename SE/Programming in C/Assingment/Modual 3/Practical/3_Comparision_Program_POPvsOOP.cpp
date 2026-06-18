//3. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task.

#include<iostream>
using namespace std;

int area(int length, int breadth) {
    return length * breadth;
}

int main()
{
	int a;
	int b;
	cout << " Enter Your Lanth" << endl;
	cin >> a;
	cout << " Enter Your breadth" << endl;
	cin >> b;
	
	int result = area(a,b);
	
	cout << "Area of Rectangle :" << result << endl;
	
}


// Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.

// #include<iostream>
// using namespace std;

// class rectangle{
// 	public :
// 		int length, breadth;


// 	int getarea()
// 	{
// 		return length * breadth;
// 	}
// 	};
// 	int main()
// 	{
// 		rectangle rect;
		
// 		cout << "Enter Your Length :" << endl;
// 		cin >> rect.length;
		
// 		cout << "Enter Your Breadth :" << endl;
// 		cin >> rect.breadth;
		
// 		cout << "Area of Ractangle is : " << rect.getarea() << endl;
// 	}

