// 6 Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    // Implicit Type Conversion
    float result1 = a / b;   
    cout << "Implicit Conversion (a / b): " << result1 << endl;

    // Explicit Type Conversion
    float result2 = (float)a / b;   
    cout << "Explicit Conversion ((float)a / b): " << result2 << endl;
}

