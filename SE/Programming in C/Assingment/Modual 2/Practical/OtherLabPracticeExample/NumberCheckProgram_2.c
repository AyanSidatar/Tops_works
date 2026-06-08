#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Even or Odd
    if(num % 2 == 0)
    {
        printf("This number is Even.\n");
    }
    else
    {
        printf("This number is Odd.\n");
    }

    // Positive, Negative, or Zero
    if(num > 0)
    {
        printf("This number is Positive.\n");
    }
    else if(num < 0)
    {
        printf("This number is Negative.\n");
    }
    else
    {
        printf("This number is Zero.\n");
    }
    // Check Multiple of 3 and 5
    if(num % 3 == 0 && num % 5 == 0)
    {
        printf("This number is a multiple of 3 and 5.\n");
    }
    else
    {
        printf("This number is NOT a multiple of 3 and 5.\n");
    }
}