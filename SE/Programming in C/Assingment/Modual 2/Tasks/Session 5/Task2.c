#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;
    printf("Enter cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = amount * 0.20;
        printf("20%% discount applied!\n");
    }
    else if (amount > 1000)
    {
        discount = amount * 0.10;
        printf("10%% discount applied!\n");
    }
    else
    {
        discount = 0;
        printf("No discount applicable.\n");
    }

    finalAmount = amount - discount;
    printf("Final amount to pay: %.2f\n", finalAmount);
    return 0;
}