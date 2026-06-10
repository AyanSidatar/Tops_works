#include <stdio.h>
int main()
{
    const float GST_RATE = 0.18;
    float basePrice = 250.00;
    float finalPrice = basePrice + (basePrice * GST_RATE);

    printf("Base Price: %.2f\n", basePrice);
    printf("Final Price (with 18%% GST): %.2f\n", finalPrice);
    return 0;
}