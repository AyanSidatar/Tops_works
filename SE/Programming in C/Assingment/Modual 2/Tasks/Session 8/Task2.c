#include <stdio.h>

void formatPrice(int price, char result[])
{

    if (price >= 1000)
    {
        int thousands = price / 1000;
        int remainder = price % 1000;
        sprintf(result, "Rs.%d,%03d", thousands, remainder);
    }
    else
    {
        sprintf(result, "Rs.%d", price);
    }
}

int main()
{
    char tag[20];
    int prices[] = {1599, 49999, 299};
    char products[][30] = {"Earbuds", "Smartphone", "Phone Case"};

    for (int i = 0; i < 3; i++)
    {
        formatPrice(prices[i], tag);
        printf("%-15s → %s\n", products[i], tag);
    }
    return 0;
}