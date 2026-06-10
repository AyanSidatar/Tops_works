#include <stdio.h>
#include <stdbool.h> // Include standard boolean library to use 'true' and 'false'

// Function to check if a given number is even or odd
bool isEven(int num)
{
    // The '%' (modulo) operator finds the remainder of dividing 'num' by 2.
    // If a number is divided by 2 and the remainder is exactly 0, it is even.
    if (num % 2 == 0)
    {
        return true; // Return true back to the caller if it's even
    }
    else
    {
        return false;
    }
}

int main()
{
    int testNum = 4;

    if (isEven(testNum))
    {
        printf("%d is an Even number.\n", testNum);
    }
    else
    {
        printf("%d is an Odd number.\n", testNum);
    }

    return 0;
}