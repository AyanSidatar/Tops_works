#include <stdio.h>

int main()
{
    float price = 1000;
    float discountPercent = 10;
    int isMember = 1;

    float finalPrice = price - (price * discountPercent / 100);

    if (isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}