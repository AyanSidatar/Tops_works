#include <iostream>

// Function prototype utilizing memory address pointers
void swapNumbers(int *ptrA, int *ptrB)
{
    int temporaryBuffer = *ptrA; // Extract the value stored at address ptrA
    *ptrA = *ptrB;               // Overwrite value at address ptrA with value at address ptrB
    *ptrB = temporaryBuffer;     // Overwrite value at address ptrB with our buffered value
}

int main()
{
    int num1 = 45;
    int num2 = 99;

    std::cout << "=== Memory Address Pointer Swapping ===\n\n";
    std::cout << "Before Swapping:\n";
    std::cout << "Variable 'num1' value: " << num1 << "\n";
    std::cout << "Variable 'num2' value: " << num2 << "\n\n";

    // Pass the memory addresses of num1 and num2 using the address-of operator (&)
    swapNumbers(&num1, &num2);

    std::cout << "After Swapping:\n";
    std::cout << "Variable 'num1' value: " << num1 << "\n";
    std::cout << "Variable 'num2' value: " << num2 << "\n";

    return 0;
}