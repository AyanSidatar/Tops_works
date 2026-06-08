#include<stdio.h>

// Function Declaration
int factorial(int);

int main()
{
    int num, ans;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function Call
    ans = factorial(num);

    printf("Factorial of %d = %d", num, ans);
}

// Function Definition
int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}