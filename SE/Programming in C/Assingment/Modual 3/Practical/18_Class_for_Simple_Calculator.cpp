// Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.

#include <iostream>
using namespace std;

// Calculator class
class Calculator {
public:
    // Addition
    int add(int a, int b) {
        return a + b;
    }

    // Subtraction
    int sub(int a, int b) {
        return a - b;
    }

    // Multiplication
    int multi(int a, int b) {
        return a * b;
    }

    // Division
    float div(int a, int b) {
        if (b != 0)
            return (float)a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator cal; // object create

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << cal.add(x, y) << endl;
    cout << "Subtraction: " << cal.sub(x, y) << endl;
    cout << "Multiplication: " << cal.multi(x, y) << endl;
    cout << "Division: " << cal.div(x, y) << endl;

}

