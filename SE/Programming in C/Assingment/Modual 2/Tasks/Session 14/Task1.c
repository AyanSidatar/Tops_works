#include <stdio.h>

int main()
{
    int prices[] = {120, 250, 90};
    int length = sizeof(prices) / sizeof(prices[0]); // Dynamically calculate array size
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += prices[i];
    }

    printf("Total price is: %d\n", total);
    return 0;
}