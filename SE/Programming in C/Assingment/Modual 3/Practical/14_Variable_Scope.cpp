// Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.


#include <iostream>
using namespace std;

// Global variable
int num = 10;

void show() {
    cout << "Inside show, Global num = " << num << endl;
}

int main() {
    // Local variable
    int num = 20;

    cout << "Inside main, Local num = " << num << endl;
    cout << "Inside main, Global num = " << ::num << endl;

    show();

}

