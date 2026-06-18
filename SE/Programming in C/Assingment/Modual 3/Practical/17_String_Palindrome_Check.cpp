// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).




#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
    {
        cout << "Palindrome" << endl;
    }
        
    else
    {
        cout << "Not Palindrome" << endl;
    }

    
}

