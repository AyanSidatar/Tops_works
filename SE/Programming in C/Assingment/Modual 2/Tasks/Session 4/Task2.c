#include <stdio.h>

float calculateTotal(float itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    printf("Total: %.2f\n", calculateTotal(299, 3));
    return 0;
}