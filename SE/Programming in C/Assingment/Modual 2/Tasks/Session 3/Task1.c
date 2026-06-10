#include <stdio.h>
int main()
{
    char productName[] = "Wireless Earbuds";
    float price = 1499.99;
    double rating = 4.5;

    printf("Product: %s (string)\n", productName);
    printf("Price: %.2f (float)\n", price);
    printf("Rating: %.1lf (double)\n", rating);
    return 0;
}